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
	long long t, m;
};

void nhap(PhanSo &x){
	cin >> x.t >> x.m;
}

PhanSo tong(const PhanSo &x, const PhanSo &y){
	PhanSo result;
	result.t = x.t * y.m + y.t * x.m;
	result.m = x.m * y.m;
	long long gcd = ucln(result.t, result.m);
	result.t /= gcd;
	result.m /= gcd;
	return result;
}

void in(const PhanSo &x){
	cout << x.t << '/' << x.m;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}