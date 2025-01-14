#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	ifstream input("DATA.in");
	map<int, int> mp;
	int n;
	while(input >> n){
		mp[n]++;
	}
	for (auto it : mp)
		cout << it.first << " " << it.second << endl;
	return 0;
}