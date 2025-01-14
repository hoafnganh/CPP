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

	void rutgon(){
		long long ucln = __gcd(tu, mau);
		tu /= ucln;
		mau /= ucln;
	}

	friend istream& operator>>(istream& is, PhanSo& ps){
		is >> ps.tu >> ps.mau;
		return is;
	}

	friend ostream& operator<<(ostream& os, PhanSo& ps){
		os << ps.tu << '/' << ps.mau;
		return os;
	}
};


int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}