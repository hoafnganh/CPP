#include<iostream>
#include<stdio.h>

using namespace std;

bool nto(int n){
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 | n % 3 == 0) return false;
	for (int i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	return true;
}

int main(){
	int n;
	cin >> n;
	if(nto(n))
		cout << "YES\n";
	else cout << "NO\n";
	return 0;
}

