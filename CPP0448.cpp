#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		map<int, int> mp;
		vector<int> v(n);
		int mini = INT_MAX, maxi = INT_MIN;
		for (int &x : v){
			cin >> x;
			mp[x]++;
			mini = min(mini, x);
			maxi = max(maxi, x);
		}
		if (!mp[k])
			cout << -1;
		else cout << mp[k];
		cout << '\n';
	}
	return 0;
}

