#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	char dap_an_de_101[] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
	char dap_an_de_102[] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
	double score = 10.0/15;
	while(t--){
		char a[15];
		int n;
		cin >> n;
		for(char &x : a)
			cin >> x;
		double diem = 0;
		if (n == 101){
			for(int i = 0; i < 15; i++){
				if (a[i] == dap_an_de_101[i]){
					diem += score;
				}
			}
		}
		if (n == 102){
			for(int i = 0; i < 15; i++){
				if (a[i] == dap_an_de_102[i]){
					diem += score;
				}
			}
		}
		cout << fixed << setprecision(2) << diem << '\n';
	}
	return 0;
}

