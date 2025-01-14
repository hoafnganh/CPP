#include<iostream>
#include<bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;

long long pow1(long long a, long long b, long long c){
	long long res = 1;
	while (b != 0){
		if (b % 2 == 1){
			//check bit la 1
			res *= a;
			res %= c;
		}
		a = ((a % c) * (a % c)) % c; // cthuc chia du
		b = b >> 1;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for (int &val : a)
			cin >> val;
		long long sum = 0;
		for (int i = 0; i < n; i++){
			sum = (sum + (a[i] % MOD) * pow1(x, n - i - 1, MOD) % MOD) % MOD;
		}

		cout << sum << "\n";
	}
	return 0;
}

