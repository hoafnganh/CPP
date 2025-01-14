#include<bits/stdc++.h>

using namespace std;
long long f[1000006];
long long mod = 1e9 + 7;
long long fibonacci(int n){
	if (n == 0) return 0;
	if (n == 1) return 1;
	f[0] = 0, f[1] = 1;
	
	for (int i = 2; i < 1000; i++){
		f[i] = f[i - 1] % mod + f[i - 2] % mod;
		if (i == n)
			return f[n] % mod;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << fibonacci(n) % mod << endl;
	}
	return 0;
}
