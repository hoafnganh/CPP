#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int mark[10001];

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cnt = 0;
		cin >> n;
		int a[1005];
		map<int, int> mp;
		int l = INT_MAX;
		int r = INT_MIN;
		for (int i = 0; i < n; i++){
		    cin >> a[i];
		    mp[a[i]]++;
		    l = min(l, a[i]);
			r = max(r, a[i]);
		}
		
		for (int i = l; i <= r; i++){
			if (mp[i] == 0)
				cnt++;
		}
		cout << cnt << "\n";
	}
	return 0;
}
