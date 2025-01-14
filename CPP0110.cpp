#include<iostream>
#include<stdio.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
				s.erase(s.begin() + i, s.begin() + i + 3);
		}
		cout << s << "\n";
	}
	return 0;
}

