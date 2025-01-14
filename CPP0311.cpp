#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool check(string s){
	int n = s.size();
	vector<int> freq(30, 0);
	for (char c : s)
		freq[c - 'a']++;
	int max_freq = *max_element(freq.begin(), freq.end());
	if (max_freq > (n + 1) / 2)
		return false;
	else return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if (check(s))
			cout << "1\n";
		else cout << "0\n";

	}
	return 0;
}