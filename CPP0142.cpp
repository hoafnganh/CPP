#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int nto(int n){
	if (n <= 1) return 0;
	if (n <= 3) return 1;
	if (n % 2 == 0 || n % 3 == 0) return 0;
	for (int i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return 0;
	return 1;
}

int euler_totient(int n){
	int result = n;
	for (int p = 2; p * p <= n; p++){
		if (n % p == 0){
			while (n % p == 0){
				n /= p;

			}
			result -= result / p;
		}
	}
	if (n > 1)
		result -= result / n;
	return result;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		int phi_x = euler_totient(x);
		if (nto(phi_x))
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}