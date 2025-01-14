#include<bits/stdc++.h>

using namespace std;


int main(){
	string s;
	int ok = 1;
	while(cin >> s){
		int n = s.size();
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		if (ok){
			s[0] = toupper(s[0]);
			ok = 0;
		}
		if (s[n - 1] == '.' || s[n - 1] == '?' || s[n - 1] == '!'){
			s.pop_back();
			cout << s << endl;
			ok = 1;
		} else cout << s << " ";
	}
	return 0;
}
