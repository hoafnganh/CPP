#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string hieu2SoLon(string& x, string& y){
	if (x.size() < y.size() || x.size() == y.size() && x < y)
		swap(x, y);

	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());

	string result = "";
	int borrow = 0;

	for (size_t i = 0; i < x.size(); i++){
		int x1 = x[i] - '0';
		int y1 = (i < y.size() ? y[i] - '0' : 0);

		int diff = x1 - y1 - borrow;

		if (diff < 0){
			diff += 10;
			borrow = 1;
		}
		else borrow = 0;

		result += (diff + '0');
	}

	reverse(result.begin(), result.end());
	return result;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string x, y;
		cin >> x >> y;
		string res = hieu2SoLon(x, y);

		cout << res << endl;
		
	}
	return 0;
}