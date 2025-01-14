#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void rotateMatrix(vector<vector<int>>& matrix, int n, int m){
	int row1 = 0, col1 = 0, row2 = n - 1, col2 = m - 1;
	while (row1 < row2 && col1 < col2){
		int prev = matrix[row1 + 1][col1];
		for (int i = col1; i <= col2; i++){
			int curr = matrix[row1][i];
			matrix[row1][i] = prev;
			prev = curr;
		}
		row1++;
		for (int i = row1; i <= row2; i++){
			int curr = matrix[i][col2];
			matrix[i][col2] = prev;
			prev = curr;
		}
		col2--;
		if (row1 <= row2){
			for (int i = col2; i >= col1; i--){
				int curr = matrix[row2][i];
				matrix[row2][i] = prev;
				prev = curr;
			}
			row2--;
		}
		if (col1 <= col2){
			for (int i = row2; i >= row1; i--){
				int curr = matrix[i][col1];
				matrix[i][col1] = prev;
				prev = curr;
			}
			col1++;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> matrix[i][j];
		rotateMatrix(matrix, n, m);
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++)
				cout << matrix[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// void rotateMatrixClockwise(vector<vector<int>>& matrix, int n, int m) {
//     int top = 0, bottom = n - 1, left = 0, right = m - 1;
//     while (top < bottom && left < right) {
//         int prev = matrix[top + 1][left];
        
//         // Move elements of top row one step right
//         for (int i = left; i <= right; i++) {
//             int curr = matrix[top][i];
//             matrix[top][i] = prev;
//             prev = curr;
//         }
//         top++;
        
//         // Move elements of rightmost column one step down
//         for (int i = top; i <= bottom; i++) {
//             int curr = matrix[i][right];
//             matrix[i][right] = prev;
//             prev = curr;
//         }
//         right--;
        
//         // Move elements of bottom row one step left
//         if (top <= bottom) {
//             for (int i = right; i >= left; i--) {
//                 int curr = matrix[bottom][i];
//                 matrix[bottom][i] = prev;
//                 prev = curr;
//             }
//         }
//         bottom--;
        
//         // Move elements of leftmost column one step up
//         if (left <= right) {
//             for (int i = bottom; i >= top; i--) {
//                 int curr = matrix[i][left];
//                 matrix[i][left] = prev;
//                 prev = curr;
//             }
//         }
//         left++;
//     }
// }

// int main() {
//     int T;
//     cin >> T; // Number of test cases
//     while (T--) {
//         int n, m;
//         cin >> n >> m; // Rows and columns
//         vector<vector<int>> matrix(n, vector<int>(m));
        
//         // Input matrix
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 cin >> matrix[i][j];
//             }
//         }
        
//         // Rotate the matrix
//         rotateMatrixClockwise(matrix, n, m);
        
//         // Output rotated matrix
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 cout << matrix[i][j] << " ";
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }
