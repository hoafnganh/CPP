#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &x : a)
		cin >> x;
	set<int> se;
	for (int i = 0; i < n; i++)
		se.insert(a[i]);
	for (auto &x : se)
		cout << x << " ";
	return 0;
}
	