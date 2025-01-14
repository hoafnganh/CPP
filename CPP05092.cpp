#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int k = n - i; k >= 1; k--){
			cout << " ";
		}
		for (int j = 1; j <= i; j++){
			if (j == 1 || j == i || i == 1 || i == n)
				cout << "* ";
			else cout << "  ";
		}

		cout << '\n';
	}
	return 0;
}