#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++){
		if (isupper(s[i]))
			s[i] = tolower(s[i]);
	}
	vector<char> v;
	for (int i = 0; i < s.size(); i++){
		if (s[i] != 'a' && s[i] != 'y' && s[i] != 'o' && s[i] != 'e' && s[i] != 'i' && s[i] != 'u')
			v.push_back(s[i]);
	}
	for (auto it : v)
		cout << '.' << it;
	return 0;
}