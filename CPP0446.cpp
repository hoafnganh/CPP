#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int sum(int a[], int n){
	int l = 0, r = n - 1;
	int t = INT_MAX;
	while (l < r){
		int tong = a[l] + a[r];
		if (abs(tong) < abs(t))
			t = tong;
		if (tong < 0)
			l++;
		else r--;
	}
	return t;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for (int &x : a)
			cin >> x;
		int min0 = INT_MAX;
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++){
				int sum = a[i] + a[j];
				if (abs(min0) > abs(sum))
					min0 = sum;
			}
		}
		cout << min0 << "\n";
	}
	return 0;
}

