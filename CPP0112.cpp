#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	while (t--){
		double x1, x2, y1, y2;
		cin >> x1 >> x2 >> y1 >> y2;
		double d;
		d = sqrt(pow(x1 - y1, 2) + pow(x2 - y2, 2));
		cout << fixed << setprecision(4) << d << "\n";
	}
	return 0;
}

