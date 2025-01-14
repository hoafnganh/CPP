#include<iostream>
#include<stdio.h>

using namespace std;

bool check(int n){
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (int i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int cnt = -1;
		for (int i = 2; i <= n / 2; i++){
			if (check(i) && check(n - i)){
				cout << i << " " << n - i;
				cnt = 1;
				break;
			}
		}
		if (cnt != 1)
			cout << -1;
		cout << "\n";
	}
	return 0;
}

