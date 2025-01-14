#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void chuan_hoa(string &s){
	if (islower(s[0]))
		s[0] -= 32;
	for (int i = 1; i < s.size(); i++){
		if (isupper(s[i]))
			s[i] += 32;
	}
}

int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	string word;
	vector<string> v;
	
	while(ss >> word){
		v.push_back(word);
		
	}
	string lastname = v[v.size() - 1];
	v.pop_back();
	for (int i = 0; i < v.size() - 1; i++)
		chuan_hoa(v[i]);
	for (int i = 0; i < lastname.size(); i++)
		if (islower(lastname[i]))
			lastname[i] = toupper(lastname[i]);
	for (int i = 0; i < v.size(); i++){
		cout << v[i];
		if (i != v.size() - 1)
			cout << " ";
	}
	cout << ", ";
	cout << lastname;
	return 0;
}