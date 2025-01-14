#include<iostream>
#include<stdio.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n, q;
		cin >> n >> q;
		int a[n];
		for (int &x : a)
			cin >> x;
		while(q--){
			int l, r;
			cin >> l >> r;
			int sum = 0;
			for (int i = l - 1; i < r; i++){
				sum += a[i];
			}
			cout << sum << "\n";
		}
	}
	return 0;
}

