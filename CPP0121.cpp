#include<iostream>
#include<stdio.h>

using namespace std;

int gcd(int a, int b){
	while (b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long lcm(int a, int b){
	long long maxi = max(a, b);
	long long kq = maxi;
	while(1){
		if (maxi % a == 0 && maxi % b == 0){
			kq = maxi;
			break;
		}
		++maxi;
	}
	return kq;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		cout << lcm(a, b) << " " << gcd(a, b) << "\n";
	}
	return 0;
}

