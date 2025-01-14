#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int check(string& s){
	int n = s.size();
	for (int i = 0; i < n / 2; i++){
		if (s[i] != s[n - i - 1])
			return 0;
	}
	return 1;
}

struct reverse{
	map<string, int> mp;
	vector<string> numbers;
	void nhap(){
		string num;
		while(cin >> num){
			if(num.size() > 1 && check(num)){
				if (!mp[num])
					numbers.push_back(num);
				mp[num]++;
			}
		}
	}
	void in(){
		sort(numbers.begin(), numbers.end(), [](string& a, string &b){
			if (a.size() != b.size())
				return a.size() > b.size();
			return a > b;
		});
		for (auto &num : numbers)
			cout << num << " " << mp[num] << "\n";
	}
		
};

int main(){
	struct reverse ds;
	ds.nhap();
	ds.in();
	return 0;
}