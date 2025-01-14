#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string word;
		vector<string> reverse;
		while (ss >> word){
			reverse.push_back(word);
		}
		for (int i = reverse.size() - 1; i >= 0; i--)
			cout << reverse[i] << " ";
		cout << '\n';
	}
	return 0;
}