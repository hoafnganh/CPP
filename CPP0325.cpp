#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		string n;
		cin >> n;
		int odd_sum = 0, even_sum = 0;
		for (int i = 0; i < n.size(); i++){
			int digit = n[i] - '0';
			if (i % 2 == 0)
				odd_sum += digit;
			else even_sum += digit;
		}
		int diff = abs(odd_sum - even_sum);
		if (diff % 11 == 0)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
