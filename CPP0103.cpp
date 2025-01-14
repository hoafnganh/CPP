#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int main(){
    double n;
    cin >> n;
    double s = 0;
    for (int i = 1; i <= n; i++){
    	s += 1.0 / i;
	}
	cout << fixed << setprecision(4) << s;
    return 0;
}

