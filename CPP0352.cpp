#include<iostream>
#include<bits/stdc++.h>

using namespace std;

map<string, int> mails;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string name;
		getline(cin, name);
		stringstream ss(name);
		string word;
		vector<string> v;
		while(ss >> word){
			transform(word.begin(), word.end(), word.begin(), ::tolower);
			v.push_back(word);
		}
		string ten = v[v.size() - 1];
		v.pop_back();
		
		string email = "";
		email += ten;
		for (auto it : v)
			email += it[0];
		mails[email]++;
		if(mails[email] > 1)
			cout << email << mails[email] << "@ptit.edu.vn" << endl;
		else cout << email << "@ptit.edu.vn" << endl;
	}
	return 0;
}