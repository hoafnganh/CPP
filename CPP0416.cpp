#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int cnt = 0;
		int a[n];
		for (int &x : a)
			cin >> x;
		for (int i = 0; i < n -1; i++){
			for (int j = i + 1; j < n; j++){
				if (a[i] + a[j] == k)
					cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}

