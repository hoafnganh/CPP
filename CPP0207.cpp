#include<iostream>
#include<stdio.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int &x : a)
			cin >> x;
		for (int i = k; i < n; i++)
			cout << a[i] << " ";
		for (int i = 0; i < k; i++)
			cout << a[i] << " ";
		cout << '\n';
	}
	return 0;
}

