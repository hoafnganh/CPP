#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);

		stringstream ss(s1);
		string wd1;
		vector<string> v1;
		while(ss >> wd1){
			v1.push_back(wd1);
		}

		stringstream cc(s2);
		string wd2;
		set<string> v2;
		while(cc >> wd2){
			v2.insert(wd2);
		}

		set<string> v;

		for (const auto& word : v1){
			if (v2.find(word) == v2.end())
				v.insert(word);
		}
		for (auto it : v)
			cout << it << " ";
		cout << endl;
	}
	return 0;
}