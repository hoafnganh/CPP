#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int seri(string s){
	int n = s.size();

tangchat:
	for (int i = 0; i < n - 1; i++){
		if (s[i] >= s[i + 1])
			goto equal;
	}
	return 1;
equal:
	for (int i = 0; i < n - 1; i++){
		if (s[i] != s[i + 1])
			goto three_two;
	}
	return 1;
three_two:
	for (int i = 0; i < 1; i++)
		if (s[i] != s[i + 1])
			goto locphat;
	if (s[3] != s[4])
		goto locphat;
	return 1;
locphat:
	for (int i = 0; i < n; i++){
		if (s[i] != '6' && s[i] != '8')
			return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string a;
		a += s[5];
		a += s[6];
		a += s[7];
		a += s[9];
		a += s[10];
		if (seri(a))
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}