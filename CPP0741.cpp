#include<bits/stdc++.h>

using namespace std;

long long mod_exp(int x, int y, long long p){
	long long res = 1;
	long long base = (x % p);
	while(y > 0){
		if (y % 2 == 1){
			res = (res * base) % p;
		}
		base = (base * base) % p;
		y /= 2;
	}
	
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x, y;
		long long p;
		cin >> x >> y >> p;
		cout << mod_exp(x, y, p) << endl;
	}
	return 0;
}
