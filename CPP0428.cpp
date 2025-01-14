#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for (int &x : a)
			cin >> x;
		for (int &x : b)
			cin >> x;
		sort(a, a + n);
		sort(b, b + m);
		vector<int> v;
		int i = 0, j = 0;
		while (i < n && j < m){
			if (a[i] == b[j]){
				v.push_back(a[i]);
				v.push_back(b[j]);
				i++;
				j++;
			}
			else if (a[i] > b[j]){
				v.push_back(b[j]);
				j++;
			}
			else {
				v.push_back(a[i]);
				i++;
			}
		}
		while (i < n){
			v.push_back(a[i]);
			i++;
		}
		while (j < m){
			v.push_back(b[j]);
			j++;
		}
		for (auto x : v)
			cout << x << " ";
		cout << "\n";
	}
	return 0;
}


