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
		sort(a, a + n, greater<int>());
		int i = 0, j = n - 1;
		while (i < j){
			cout << a[i] << " " << a[j] << " ";
			i++;
			j--;
		}
		if (i == j)
			cout << a[i];
		cout << '\n';
	}
	return 0;
}

