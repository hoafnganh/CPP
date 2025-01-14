#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int binary_search(int a[], int n, int x){
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if (a[m] == x) return 1;
		else if (a[m] > x)
			r = m - 1;
		else l = m + 1;
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		if(binary_search(a, n, k))
			cout << 1;
		else cout << -1;
		cout << "\n";
	}
	return 0;
}

