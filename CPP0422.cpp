#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cnt = 0;
		cin >> n;
		long long a[n];
		for (long long &x : a){
			cin >> x;
			if (x != 0)
				cnt++;
		}
		for (int i = 0; i < cnt; i++){

				cout << a[i] << " ";
				
		}
		for (int i = 0; i < n - cnt; i++)
			
				cout << a[i] << " ";
		cout << '\n';
	}
	return 0;
}

