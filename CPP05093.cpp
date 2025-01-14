#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int k = n - i; k >= 1; k--)
			cout << " ";
		for (int j = 1; j <= i; j++){
			if (j == 1 || j == i)
				cout << "* ";
			else cout << "  ";
		}
		cout << '\n';
	}
	for (int i = 1; i <= n - 1; i++){
		for (int k = 1; k <= i; k++)
			cout << " ";
		for (int j = n - i; j >= 1; j--){
			if (j == n - i || j == 1)
				cout << "* ";
			else cout << "  ";
		}
		cout << "\n";
	}
	return 0;
}
