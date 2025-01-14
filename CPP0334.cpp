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
		long long sum = 0;
		for (int i = 0; i < n; i++){
			if (isdigit(s[i])){
				long long res = 0;
				while(isdigit(s[i])){
					res = res * 10 + s[i] - '0';
					i++;
				}
				sum += res;
			}
		}
		cout << sum << endl;
	}
	return 0;
}