#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){
	while(b != 0){
		long long r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		long long x, y;
		long long p, q;
		cin >> a >> x >> y;
		long long gcd_xy = gcd(x, y);
		string kq = "";
		for (long long	 i = 0; i < gcd_xy; i++)
			kq += a;
		cout << kq << "\n";
	}
}

