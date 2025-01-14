#include<iostream>
#include<stdio.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long long k;
		cin >> n >> k;
		long long sum = 0;
		for (int i = 1; i <= n; i++){
			sum += i % k;
		}
		if (sum == k)
			cout << 1;
		else cout << 0;
		cout << '\n';
	}
	return 0;
}

