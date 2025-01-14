#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int n;
	cin >> n;
	int a[n][n];
	multiset<int> se;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
			se.insert(a[i][j]);
		}
	int matrix[n][n] = {};
	int index = 0; // chi so cua set
	vector<int> sorted(se.begin(), se.end());
	int row1 = 0, col1 = 0, row2 = n - 1, col2 = n - 1;
	while(row1 <= row2 && col1 <= col2){
		for (int i = col1; i <= col2; i++)
			matrix[row1][i] = sorted[index++];
		row1++;
		for (int i = row1; i <= row2; i++)
			matrix[i][col2] = sorted[index++];
		col2--;
		if (row1 <= row2){
			for (int i = col2; i >= col1; i--)
				matrix[row2][i] = sorted[index++];
			row2--;
		}
		if (col1 <= col2){
			for (int i = row2; i >= row1; i--)
				matrix[i][col1] = sorted[index++];
			col1++;
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
			cout << matrix[i][j] << " ";
		cout << '\n';
	}
	return 0;
}