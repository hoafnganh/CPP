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
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
		int row1 = 0, col1 = 0, row2 = n - 1, col2 = m - 1;
		while(col1 <= col2 && row1 <= row2){
			for (int i = col1; i <= col2; i++){
				cout << a[row1][i] << " ";
			}
			row1++;
			for (int i = row1; i <= row2; i++){
				cout << a[i][col2] << " ";
			}
			col2--;
			if (row1 <= row2){
				for (int i = col2; i >= col1; i--){
					cout << a[row2][i] << " ";
				}
				row2--;
			}
			if (col1 <= col2){
			for (int i = row2; i >= row1; i--){
				cout << a[i][col1] << " ";
			}
			col1++;
			}
		}
		cout << '\n';
	}
	return 0;
}