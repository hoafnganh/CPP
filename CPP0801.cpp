#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	// ofstream fileA("A.txt");

	// int n;
	// cin >> n;
	// cin.ignore();
	// while(n--){
	// 	string name;
	// 	getline(cin, name);
	// 	fileA << name << "\n";
	// }
	// fileA.close();
	ifstream src("PTIT.in", ios::in);
	ofstream dest("PTIT.out", ios::out);
	dest << src.rdbuf();
	dest.close();
	src.close();

	return 0;
}