#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		map<int, int> mp;
		for (int &x : a){
			cin >> x;
			mp[x]++;
		}
		long long sum = 0;
		for (auto x : mp){
			if (x.second > 1)
				sum += x.second;
		}
		cout << sum;
		cout << "\n";
		
	}
	return 0;
}

