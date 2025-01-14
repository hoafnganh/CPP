#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		set<int> se;
		for (long long &x : a)
			cin >> x;
		for (int i = 0; i < n; i++){
			while(a[i]){
				int k = a[i] % 10;
				se.insert(k);
				a[i] /= 10;
			}
		}
		for (auto it : se)
			cout << it << " ";
		cout << '\n';
	}
	return 0;
}

