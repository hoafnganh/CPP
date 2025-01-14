#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int maxArea(vector<vector<int>>& matrix){
	int row = matrix.size();
	int col = matrix[0].size();
	vector<vector<int>> hist(row, vector<int>(col, 0));

	//danh dau cac so 1 lien tiep trong cot
	for (int i = 0; i < col; i++){
		hist[0][i] = matrix[0][i];
		for (int j = 1; j < row; j++){
			hist[j][i] = (matrix[j][i] == 0) ? 0 : hist[j - 1][i] + 1;
		}
	}
	//sap xep tung hang giam dan
	for (int i = 0; i < row; i++){
		vector<int> count(row + 1, 0);
		for (int j = 0; j < col; j++)
			count[hist[i][j]]++;
		int col_no = 0;
		for (int j = row; j >= 0; j--){
			if (count[j] > 0){
				for (int k = 0; k < count[j]; k++){
					hist[i][col_no] = j;
					col_no++;
				}
			}
		}
	}
	//tinh dien tich lon nhat
	int max_area = 0, curr;
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			curr = (j + 1) * hist[i][j];
			max_area = max(max_area, curr);
		}
	}
	return max_area;

}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> a(n, vector<int>(m));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
		int max_area = maxArea(a);
		cout << max_area << '\n';
	}
	return 0;
}