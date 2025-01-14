#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cin.ignore();
		string name;
		getline(cin, name);
		stringstream ss(name);
		vector<string> v;
		string correct_name = "", word;
		while (ss >> word){
			transform(word.begin(), word.end(), word.begin(), ::tolower);
			word[0] = toupper(word[0]);
			v.push_back(word);
		}
		if (n == 1){
			cout << v[v.size() - 1] << " ";
			for (size_t i = 0; i < v.size() - 1; i++)
				cout << v[i] << " ";
			cout << endl;
		}
		if (n == 2){
			for (size_t i = 1; i < v.size(); i++)
				cout << v[i] << " ";
			cout << v[0] << " ";
			cout << endl;
		}
	}
	return 0;
}