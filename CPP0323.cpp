#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long chiadu(string n, long long m){
	long long k = 0;
	for (size_t i = 0; i < n.size(); i++){
		k = (k * 10 + n[i] - '0') % m;
	}
	return k;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string n;
		long long m;
		cin >> n >> m;
		cout << chiadu(n, m) << endl;
	}
	return 0;
}