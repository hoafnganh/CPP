#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n, res = -1;
		
		cin >> n;
		map<int, int> mp;
		int a[n];
		for (int &x : a){
			cin >> x;
			mp[x]++;
			if (mp[x] > 1 && res == -1){
				res = x;
			}
		}
		if (res != -1)
			cout << res << "\n";
		else cout << -1 << '\n';
	}
	return 0;
}

