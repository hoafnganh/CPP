#include<iostream>
#include<stdio.h>

using namespace std;

int sum(int n){
	while(n >= 10){
		n = n / 10 + n % 10;
	}
	return n;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << sum(n) << '\n';
	}
	return 0;
}

