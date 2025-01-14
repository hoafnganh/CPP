#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int check(string& n){
	for (size_t i = 0; i < n.size() / 2; i++){
		if (n[i] != n[n.size() - i - 1])
			return 0;
	}
	return 1;
}


int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		string num = "";
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		for (size_t i = 0; i < s.size(); i++){
			if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c')
				num += '2';
			else if (s[i] == 'd' || s[i] == 'e' || s[i] == 'f')
				num += '3';
			else if (s[i] == 'g' || s[i] == 'h' || s[i] == 'i')
				num += '4';
			else if (s[i] == 'j' || s[i] == 'k' || s[i] == 'l')
				num += '5';
			else if (s[i] == 'm' || s[i] == 'n' || s[i] == 'o')
				num += '6';
			else if (s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's')
				num += '7';
			else if (s[i] == 't' || s[i] == 'u' || s[i] == 'v')
				num += '8';
			else if (s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z')
				num += '9';
		}
		
		if(check(num))
			cout << "YES\n";
		else cout << "NO\n";

	}
	return 0;
}