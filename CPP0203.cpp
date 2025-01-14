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
		for (int &x : a){
			cin >> x;
			
		}
		sort(a, a + n);
		int x = 1;
		for (int i = 0; i < n; i++){
			if (x == a[i] && a[i] > 0){
				x++;
			}
		}
		cout << x;
		cout << '\n';
	}
	return 0;
}

