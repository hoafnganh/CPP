#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		int pos = -1;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		for (int i = 0; i < n; i++){
			if (a[i] == k){
				pos = i + 1;
				break;
			}
		}cout << pos << "\n";
	}
	return 0;
}

