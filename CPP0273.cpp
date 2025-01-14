#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int balance_point(int a[], int n){
	int leftSum = 0, totalSum = 0;
	for (int j = 0; j < n; j++)
		totalSum += a[j];
	for (int i = 0; i < n; i++){
		totalSum -= a[i];
		if (leftSum == totalSum)
			return i + 1;
		leftSum += a[i];
	}
	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int result = balance_point(a, n);
		cout << result << "\n";
	}
	return 0;
}