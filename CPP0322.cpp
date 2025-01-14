#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void sum2num(vector<char>& a, vector<char>& b){
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	int n1 = a.size(), n2 = b.size();
	vector<int> x1(max(n1, n2), 0), x2(max(n1, n2), 0);

	for (int i = 0; i < n1; i++)
		x1[i] = a[i] - '0';
	for (int i = 0; i < n2; i++)
		x2[i] = b[i] - '0';

	vector<int> result;
	int carry = 0;

	for (int i = 0; i < max(n1, n2); i++){
		int sum = x1[i] + x2[i] + carry;
		result.push_back(sum % 10);
		carry = sum / 10;
	}

	while(carry){
		result.push_back(carry % 10);
		carry /= 10;
	}
	reverse(result.begin(), result.end());
	for (int c : result){
		cout << c;
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string x, y;
		cin >> x >> y;
		vector<char> a(x.begin(), x.end());
		vector<char> b(y.begin(), y.end());
		sum2num(a, b);
	}
	return 0;
}
