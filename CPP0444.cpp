#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> v(n);
		for (int &x : v)
			cin >> x;
		auto it = find(v.begin(), v.end(), k);
		if (it != v.end()){
			cout << distance(v.begin(), it) + 1;
		}
		cout << '\n';
	}
	return 0;
}

