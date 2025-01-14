#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int so_dep(string s){
	int n = s.size();
	for (int i = 0; i <= n / 2; i++){
		if (s[i] != s[n - i - 1])
			return 0;
	}
	return 1;
}

int check(string s){
	int n = s.size();
	for (int i = 0; i <= n / 2; i++)
		if ((s[i] - '0') % 2 == 1)
			return 0;
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if (so_dep(s) && check(s))
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}