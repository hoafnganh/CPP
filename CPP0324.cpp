#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long chiadu(string a, long long m){
	long long k = 0;
	for (size_t i = 0; i < a.size(); i++){
		k = (k * 10 + a[i] - '0') % m;
	}
	return k;
}

long long mul1(long long a, long long b, long long m){
	long long res = 0;
	a %= m;
	while(b){
		if (b % 2 == 1){
			res = (res + a) % m;
		}
		a = (a << 1) % m;
		b /= 2;
	}
	return res;
}

long long pow1(long long a, long long b, long long m){
	long long res = 1;
	while (b != 0){
		if (b % 2 == 1){
			res = mul1(res, a, m);
		}
		a = mul1(a, a, m);
		b /= 2;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		long long b, m;
		cin >> a >> b >> m;
		long long k = chiadu(a, m);
		cout << pow1(k, b, m) << endl;
	}
	return 0;
}