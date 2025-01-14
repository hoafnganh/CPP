#include<iostream>
#include<bits/stdc++.h>

using namespace std;



class PhanSo{
private:
	long long tu, mau;
public:
	PhanSo() {};
	PhanSo(long long tu, long long mau){
		this->tu = tu;
		this->mau = mau;
	}
	friend istream& operator>>(istream& is, PhanSo& ps){
		is >> ps.tu >> ps.mau;
		return is;
	}
	void rutgon(){
		long long ucln = __gcd(tu, mau);
		tu /= ucln;
		mau /= ucln;
	}

	friend PhanSo operator+(PhanSo A, PhanSo B){
		PhanSo result;	
		result.tu = B.tu * A.mau + B.mau * A.tu;
		result.mau = B.mau * A.mau;
		result.rutgon();
		return result;
	}
	friend ostream& operator<<(ostream& os, PhanSo ps){
		return os << ps.tu << '/' << ps.mau;
	}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}