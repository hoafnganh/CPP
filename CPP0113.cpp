#include<iostream>
#include<stdio.h>

using namespace std;

bool check(int n){
	
		int k = n % 10;
		n /= 10;
		int m = n % 10;
		n /= 10;
	
	if (k == 6 && m == 8) return true;
	else return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(check(n))
			cout << 1 << "\n";
		else cout << 0 << "\n";
	}
	return 0;
}

