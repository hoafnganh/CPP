#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int fibo(long long n){
	if (n == 1 || n == 0) return 1;
	long long f1 = 1, f0 = 0;
	for (int i = 1; i <= 92; i++){
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
		int n;
		cin >> n;
		int a[n];
		for (int &x : a)
			cin >> x;
		vector<int> v;
		for (int i = 0; i < n; i++){
			if (fibo(a[i]))
				v.push_back(a[i]);
		}
		for (auto it : v)
			cout << it << " ";
		cout << "\n";
	}
	return 0;
}

