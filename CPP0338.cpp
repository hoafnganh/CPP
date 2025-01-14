#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int k;
		cin >> s >> k;
		
		int cnt = 0;
		for (size_t i = 0; i < s.size(); i++){
			int k1 = 0;
			int freq[30] = {};
			for (size_t j = i; j < s.size(); j++){
				if(!freq[s[j] - 'a'])
					k1++;
				freq[s[j] - 'a']++;
				if (k1 == k){
					cnt++;
				}
				if (k1 > k)
					break;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}