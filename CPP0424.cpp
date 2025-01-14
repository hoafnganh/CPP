#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		set<int> se;
		cin >> k >> n;
		vector<int> v;
		for (int i = 0; i < k; i++){
			for (int j = 0; j < n; j++){
				int x; cin >> x;
				v.push_back(x);
			}
		}
		sort(v.begin(), v.end());
		for (auto x : v)
			cout << x << " ";
		cout << "\n";
	}
	return 0;
}

