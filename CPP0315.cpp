#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string swap_(string s){
	int n = s.size();
	for (int i = n - 1; i > 0; i--){
		if (s[i] < s[i - 1]){
			int tmp = i;
			for (int j = i + 1; j < n; j++){
				if (s[j] < s[i - 1] && s[j] > s[tmp])
					tmp = j;
			}
			swap(s[i - 1], s[tmp]);
			if (s[0] == '0') s.erase(0, 1);
			return s;
		}
	}
	return "-1";
}


int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string w = swap_(s);
		cout << w << "\n";
	}
	return 0;
}