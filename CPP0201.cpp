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
		sort(a, a + n);
		int d = a[1] - a[0];
		for (int i = 1; i < n; i++){
			if (d > a[i] - a[i - 1])
				d = a[i] - a[i - 1];
		}
		cout << d << "\n";
	}
	return 0;
}

