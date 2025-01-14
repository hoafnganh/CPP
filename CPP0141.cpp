#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int check(long long n){
	if (n == 1 || n == 0) return 1;
	long long f1 = 1, f0 = 0;
	for (int i = 2; i <= 92; i++){
		long long fn = f1 + f0;
		if (fn == n) return 1;
		f0 = f1;
		f1 = fn;
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if (check(n))
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

