#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];			
		for (long long &x : a){
			cin >> x;
		}		
		vector<int> kq(n, - 1);
		for (int i = 0; i < n; i++){
			if (a[i] >= 0 && a[i] < n)
				kq[a[i]] = a[i];
		}
		for (int i = 0; i < n; i++)
			cout << kq[i] << " ";
		cout << '\n';
		
	}
	return 0;
}

