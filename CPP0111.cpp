#include<iostream>
#include<stdio.h>

using namespace std;

bool check(long long n){
	while(n){
		int k = n % 10;
		n /= 10;
		int m = n % 10;
		if (abs(k - m) > 1) return false;
		n /= 10;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(check(n))
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

