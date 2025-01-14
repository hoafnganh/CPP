#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int cnt = 0;
		vector<int> v;
		while(n % 2 == 0){
			v.push_back(2);
			cnt++;
			n /= 2;
		}
		int i = 3;
		while (i * i <= n){
			while (n % i == 0){
				v.push_back(i);
				cnt++;
				n /= i;
			}
			i += 2;
		}
		if (n > 2){
			v.push_back(n);
			cnt++;
		}
		if (k < cnt)
			cout << v[k - 1];
		else cout << -1;
		cout << "\n";
	}
	return 0;
}

