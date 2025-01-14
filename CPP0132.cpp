#include<iostream>
#include<stdio.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if (n == 2){
			cout << 2 << "\n";
			continue;
		}
		while(n % 2 == 0)
			n /= 2;
		long long max_prime = 2;
		long long i = 3;
		while(i * i <= n){
			while (n % i == 0){
				max_prime = i;
				n /= i;
			}
			i += 2;
		}
		if (n > 2) max_prime = n;
		cout << max_prime;
		cout << "\n";
	}
	return 0;
}

