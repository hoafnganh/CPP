#include<iostream>
#include<stdio.h>

using namespace std;



int main(){
	long long n;
	cin >> n;
	long long res = 1, sum = 0;
	for (int i = 1; i <= n; i++){
		res *= i;
		sum += res;
	}
	cout << sum;
	return 0;
}

