#include<iostream>
#include<stdio.h>

using namespace std;

bool check(int n){
	while(n){
		int k = n % 10;
		if (k != 0 && k != 6 && k != 8)
			return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if (check(n)){
			cout << "YES\n";
		} else cout << "NO\n";
	}
	return 0;
}

