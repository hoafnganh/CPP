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

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long cnt = 0;
		for (long long i = 1; i * i <= n; i++){
			if (nto(i))
				cnt++;
		}
		cout << cnt << "\n";
	}
	return 0;
}

