#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][n];

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> a[i][j];

		unordered_map<int, int> mp;

		for (int j = 0; j < n; j++)
			mp[a[0][j]]++;

		for (int i = 1; i < n; i++){
			unordered_map<int, int> currentRow;

			for (int j = 0; j < n; j++){
				currentRow[a[i][j]]++;
			}

			for (auto it = mp.begin(); it != mp.end();){
				if (currentRow[it->first] == 0)
					it = mp.erase(it);
				else it++;
			}
		}
		cout << mp.size() << '\n';
	}
	return 0;
}