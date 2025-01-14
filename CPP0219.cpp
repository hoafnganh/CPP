#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		vector<int> row(n, 0);
		vector<int> col(m, 0);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++){
				cin >> a[i][j];
				if (a[i][j] == 1){
					row[i] = 1;
					col[j] = 1;
				}
			}
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++){
				if (row[i] == 1 || col[j] == 1)
					a[i][j] = 1;
			}
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				cout << a[i][j] << " ";
			}
			cout << '\n';
		}	
	}
	return 0;
}
