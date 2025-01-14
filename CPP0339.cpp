#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int cnt = 0;
		int f[30] = {};
		for (char c : s) f[c - 'a']++;
		for (int i = 0; i < 30; i++){
			cnt += (f[i] * (f[i] + 1)) / 2;
		}
		cout << cnt << "\n";
	}
	return 0;
}