#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int tinhTong(string n){
	int sum = 0;
	for (char c : n){
		sum += c - '0';
	}
	return sum;
}

int check(string n){
	int sum = tinhTong(n);
	if (sum == 9) return 1;
	if (sum > 9) return check(to_string(sum));
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string n;
		cin >> n;
		if (check(n))
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}