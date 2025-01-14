#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int k;
		cin >> s >> k;
		int cnt = 0;
		int f[30] = {};
		for (char c : s){
			f[c - 'a']++;
		}
		for (int i = 0; i < 26; i++){
			if (f[i] == 0)
				cnt++;
		}
		if (cnt <= k)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}