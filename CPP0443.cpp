#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		map<int, int> mp;
		int n;
		cin >> n;
		vector<int> a(n - 1);
		for (int &x : a){
			cin >> x;
			mp[x]++;
		}
		sort(a.begin(), a.end());
		for (int i = 1; i <= n; i++){
			if (mp[i] == 0){
				cout << i;
				break;
			}
		}
		cout << "\n";
	}
	return 0;
}

