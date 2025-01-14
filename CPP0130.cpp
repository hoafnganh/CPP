#include<iostream>
#include<stdio.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		while (n % 2 == 0){
			cout << 2 << " ";
			n /= 2;
		}
		long long i = 3;
		while(i * i <= n){
			while (n % i == 0){
				cout << i << " ";
				n /= i;
			}
			i += 2;
		}
		if (n > 2) cout << n;
		cout << '\n';
	}
	return 0;
}

