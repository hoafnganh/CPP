#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long gcd(int a, int b){
	a = abs(a);
	b = abs(b);
	while(b){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

struct PhanSo{
	int tu, mau;
	void rutgon(){
		long long uc = gcd(tu, mau);
		tu /= uc;
		mau /= uc;
		
	}
	PhanSo cong(const PhanSo& other){
		PhanSo result;
		int k = gcd(mau, other.mau);
		k = mau * other.mau / k;
		result.tu = tu * k / mau + k * other.tu / other.mau;
		result.mau = k;
		result.rutgon();
		return result;
	}

	PhanSo nhan(const PhanSo& other){
		PhanSo result;
		result.tu = tu * other.tu;
		result.mau = mau * other.mau;
		result.rutgon();
		return result;
	}
};

void process(PhanSo A, PhanSo B){
	A.rutgon();
	B.rutgon();
	PhanSo C, D;
	C = A.cong(B);
	C = C.nhan(C);
	D = A.nhan(B).nhan(C);
	cout << C.tu << '/' << C.mau << " " << D.tu << '/' << D.mau << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}

