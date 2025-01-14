#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int check(string s){
	int n = s.size();
	if (s[0] == '0')
		return 0;
	for (char c : s){
		if (c < '0' || c > '9')
			return 0;
	}
	set<char> digits(s.begin(), s.end());
	if (digits.size() == 10)
		return 1;
	return 2;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if (s.size() <= 20 || s.size() > 1000){
			cout << "INVALID\n";
			continue;
		}


		if (!check(s))
			cout << "INVALID\n";
		else if (check(s) == 1)
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
	return 0;
}