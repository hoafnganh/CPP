#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int n, m;
	cin >> n >> m;
	int a[n] = {};
	map<int, int> mp;
	int maxi = INT_MIN;
	int second = 0;
	vector<int> v(m, 0);
	for (int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
		maxi = max(maxi, mp[a[i]]);
	}
	for (int i = 0; i < n; i++){
		if (second < mp[a[i]] && mp[a[i]] != maxi){
			second = mp[a[i]];
		}
	}
	for (int i = 0; i < n; i++){
		if (mp[a[i]] == second && second != 0){
			cout << a[i];
			break;
		}
	}
	if (second == 0)
		cout << "NONE";
	return 0;
}