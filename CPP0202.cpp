#include<iostream>
#include<stdio.h>
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
		int d = INT_MAX;
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++){
				if (d > abs(a[i] - a[j]))
					d = abs(a[i] - a[j]);
			}
		}
		cout << d << "\n";
	}
	return 0;
}

