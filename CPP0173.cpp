#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long bcnn(int a, int b){
	return 1ll * a * (b / __gcd(a, b));
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int x, y, z;
		long long n;
		cin >> x >> y >> z >> n;
		long long start = pow(10, n - 1);
		long long end = pow(10, n) - 1;
		long long res = bcnn(bcnn(x, y), z);
		long long mini = (start + res - 1) / res * res;
		if (mini <= end)
			cout << mini;
		else cout << -1;
		cout << "\n";
	}
	return 0;
}
