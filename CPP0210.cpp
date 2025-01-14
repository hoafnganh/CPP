#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for (int &x : a)
			cin >> x;
		int maxi = INT_MIN;
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++){
				if (a[i] < a[j]){
					maxi = max(maxi, a[j] - a[i]);
				}
			}
		}
		if (maxi == INT_MIN)
			cout << -1;
		else cout << maxi << '\n';
	}
	return 0;
}

