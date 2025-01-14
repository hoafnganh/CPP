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
		sort(a, a + n);
		int pos = 0;
		int min2 = INT_MAX;
		int min1 = a[0];
		for (int i = 1; i < n; i++){
			if (a[i] == a[0]){
				pos = -1;
			}
		}
		if (pos == -1)
			cout << -1;
		else cout << a[0] << " " << a[1];
		cout << '\n';
	}
	return 0;
}

