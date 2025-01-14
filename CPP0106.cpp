#include<iostream>
#include<stdio.h>

using namespace std;

bool check(long long n){
	long long m = 0, tmp = n;
	while(n){
		m = m * 10 + n % 10;
		n /= 10;
	}
	if (m == tmp) return true;
	else return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if (check(n))
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

