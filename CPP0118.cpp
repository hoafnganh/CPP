#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int check(int n){
	int cnt = 0;
	map<int, int> mp;
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0){
			while (n % i == 0){
				mp[i]++;
				if (mp[i] > 1) return 0;
				cnt++;
				n /= i;
			}
		}
	}
	if (n != 1){
		cnt++;
	}
	return (cnt == 3);
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		if (check(n))
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
