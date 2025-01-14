#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long ucln(long long a, long long b){
	while(b){
		long long r = a % b;
		a = b;
		b = r;
	}
	return a;
}

struct PhanSo{
	long long tu, mau;
};

void nhap(PhanSo &x){
	cin >> x.tu >> x.mau;
}

void rutgon(PhanSo &x){
	long long a = x.tu;
	long long b = x.mau;
	x.tu = x.tu / ucln(a, b);
	x.mau = x.mau / ucln(a, b);
}

void in(const PhanSo &x){
	cout << x.tu << '/' << x.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}