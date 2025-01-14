#include<iostream>
#include<bits/stdc++.h>

using namespace std;



// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n;
// 		cin >> n;
// 		int a[n][n];
// 		vector<int> rowSum(n, 0), colSum(n, 0);		
// 		for (int i = 0; i < n; i++)
// 			for (int j = 0; j < n; j++){
// 				cin >> a[i][j];
// 				rowSum[i] += a[i][j];
// 				colSum[j] += a[i][j];
// 			}	
// 		int max_sum = *max_element(rowSum.begin(), rowSum.end());
// 		max_sum = max(max_sum, *max_element(colSum.begin(), colSum.end()));
// 		int cnt = 0;
// 		for (int i = 0; i < n; i++)
// 			cnt += max_sum - rowSum[i];
// 		cout << cnt << "\n";
// 	}
// 	return 0;
// }

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][n];
		vector<int> rowSum(n, 0), colSum(n, 0);
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> a[i][j];
				rowSum[i] += a[i][j];
				colSum[j] += a[i][j];
			}
		}
		int sum = 0, cnt = 0;
		for (int i = 0; i < n; i++){
			sum = max(sum, max(rowSum[i], colSum[i]));
		}
		for (int i = 0, j = 0; i < n && j < n;){
			int k = min(sum - rowSum[i], sum - colSum[j]);
			rowSum[i] += k;
			colSum[i] += k;
			a[i][j] += k;
			cnt += k;
			if (rowSum[i] == sum) i++;
			if (colSum[j] == sum) j++;
		}
		cout << cnt << "\n";
	}
	return 0;
}
