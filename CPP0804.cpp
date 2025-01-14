#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	ifstream input("VANBAN.in");
	string s;
	set<string> se;
	while(input >> s){
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		se.insert(s);
	}
	for (auto it : se)
		cout << it << endl;
	return 0;
}