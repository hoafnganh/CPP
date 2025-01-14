#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		cin >> s;
		int cnt = 1;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == s[i + 1])
				cnt++;
			if (s[i] != s[i + 1]){
				cout << s[i] << cnt;
				cnt = 1;
			}
		}
		cout << '\n';
	}
	return 0;
}