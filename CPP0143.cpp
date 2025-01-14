#include<iostream>
#include<stdio.h>

using namespace std;

long long fibo(int n){
	if (n == 1 || n == 2) return 1;
	long long f1 = 1, f2 = 1, fn;
	for (int i = 3; i <= n; i++){
		fn = f1 + f2;
		f2 = f1;
		f1 = fn;
	}
	return fn;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << fibo(n);
		cout << "\n";
	}
	return 0;
}

