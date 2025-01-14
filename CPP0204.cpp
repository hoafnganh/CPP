#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int nto(int n){
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
		int l, r;
		int cnt = 0;
		cin >> l >> r;
		for (int i = l; i <= r; i++){
			if (nto(i))
				cnt++;
		}
		cout << cnt << "\n";
	}
	return 0;
}

