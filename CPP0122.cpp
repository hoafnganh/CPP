#include<iostream>
#include<stdio.h>

using namespace std;

long long ucln(long long a, long long b){
	while(b != 0){
		long long r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long bcnn(long long a, long long b){
	return a * b / ucln(a, b);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long res = 1;
		for (int i = 1; i <= n; i++){
			res = bcnn(res, i);
		}
		cout << res << "\n";
	}
	return 0;
}

