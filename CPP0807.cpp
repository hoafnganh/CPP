#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	ifstream input("DATA.in");
	int n, m;
	input >> n >> m;
	vector<int> a(n), b(m);
	for (int i = 0; i < n; i++){
		input >> a[i];
	}
	for (int i = 0; i < m; i++)
		input >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	set<int> se;
	set_intersection(a.begin(), a.end(), b.begin(), b.end(), inserter(se, se.begin()));
	for (auto it : se)
		cout << it << " ";
	return 0;
}