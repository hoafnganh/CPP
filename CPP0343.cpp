	#include<iostream>
	#include<bits/stdc++.h>

	using namespace std;



	int main(){
		int t;
		cin >> t;
		cin.ignore();
		while(t--){
			string line;
			getline(cin, line);
			stringstream ss(line);
			vector<int> numbers;
			int num, cnt = 0, chan = 0, le = 0;
			while(ss >> num){
				numbers.push_back(num);
				cnt++;
				if (num % 2 == 0)
					chan++;
				else if (num % 2 == 1)
					le++;
			}
				
			if (chan > le && cnt % 2 == 0)
				cout << "YES\n";
			else if (le > chan && cnt % 2 == 1)
				cout << "YES\n";
			else cout << "NO\n";
		}
		return 0;
	}