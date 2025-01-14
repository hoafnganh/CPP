#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void chuan_hoa(string &s){
	for (int i = 0; i < s.size(); i++){
		if (isupper(s[i]))
			s[i] = tolower(s[i]);
	}
}

int main(){
	string s;
	getline(cin, s);
	vector<string> v;
	stringstream ss(s);
	string word;
	while(ss >> word){
		v.push_back(word);
	}
	string lastname = v[v.size() - 1];
	v.pop_back();
	chuan_hoa(lastname);
	for (int i = 0; i < v.size(); i++){
		chuan_hoa(v[i]);
	}
	cout << lastname;
	for (auto it : v)
		cout << it[0];
	cout << "@ptit.edu.vn";
	return 0;
}