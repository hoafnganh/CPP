#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	scanf("\n");
	while(t--){
		string s;
		cin >> s;
		char f[30] = {};
		for (char c : s) ++f[c - 'A'];
		for (char c : s) 
			if (f[c - 'A'] == 1)
				cout << c;
		cout << endl;
	}
	return 0;
}

