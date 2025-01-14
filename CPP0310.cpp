#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string x1, x2;
		cin >> x1 >> x2;
		//min
		for (int i = 0; i < x1.size(); i++){
			if (x1[i] == '6')
				x1[i] = '5';
		}
		for (int i = 0; i < x2.size(); i++){
			if (x2[i] == '6')
				x2[i] = '5';
		}
		long long smallest = 0;
		smallest = stoll(x1) + stoll(x2);
		//max
		for (int i = 0; i < x1.size(); i++){
			if (x1[i] == '5')
				x1[i] = '6';
		}
		for (int i = 0; i < x2.size(); i++){
			if (x2[i] == '5')
				x2[i] = '6';
		}
		long long largest = 0;
		largest = stoll(x1) + stoll(x2);
		cout << smallest << " " << largest << '\n';
	}
	return 0;
}