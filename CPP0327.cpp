#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		long long decimal = 0;
		for (char bit : s){
			decimal = (decimal * 2 + (bit - '0')) % 5;
		}
		if (decimal == 0)
			cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}