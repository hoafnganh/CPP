#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		vector<int> freq(30, 0);
		long long sum = 0;
		for (size_t i = 0; i < s.size(); i++){
			if (isdigit(s[i])){
				sum += s[i] - '0';
			}
		}
		for (char c : s){
			freq[c - 'A']++;
		}
		for (size_t i = 0; i < freq.size(); i++){
			for (int j = 0; j < freq[i]; j++)
				cout << (char)(i + 'A');
		}
		cout << sum << endl;
	}
	return 0;
}