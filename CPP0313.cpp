#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	string s, t;
	getline(cin, s);
	cin >> t;
	
	stringstream ss(s);
	string word;
	while (ss >> word) 
		if (word != t)
			cout << word << ' ';
	return 0;
}

