#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		long long maxi = LC_MIN;
		for (int i = 0; i < n; i++){
			
			if (isdigit(s[i])){
				long long res = 0;
				while(isdigit(s[i])){
					res = res * 10 + s[i] - '0';
					i++;
				}
				maxi = max(maxi, res);
			}
		}
		cout << maxi << endl;
	}
	return 0;
}