#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int nto(long long n){
	if (n <= 1) return 0;
	if (n <= 3) return 1;
	if (n % 2 == 0 || n % 3 == 0) return 0;
	for (int i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return 0;
	return 1;
}

int increase(int n){
	int k = n % 10;
	n /= 10;
	while(n){
		int m = n % 10;
		if (m >= k)
			return 0;
		k = m;
		n /= 10;
	}
	return 1;
}
int decrease(int n){
	int k = n % 10;
	n /= 10;
	while(n){
		int m = n % 10;
		if (m <= k)
			return 0;
		k = m;
		n /= 10;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int start = pow(10, n - 1);
		int end = pow(10, n) - 1;
		int cnt = 0;
		for (int i = start; i <= end; i++){
			if ((increase(i) || decrease(i)) && nto(i))
				cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}