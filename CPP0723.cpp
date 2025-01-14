#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int giai_thua(int n){
	if (n == 0 || n == 1) return 1;
	int res = 1;
	for (int i = 2; i <= n; i++){
		res *= i;
	}
	return res;
}

string max_number_from_digits(const string &a){
	string result = "";
	for (char c : a){
		if (c == '4') result += "322"; // 4 = 3 * 2 * 2
        else if (c == '6') result += "53"; // 6 = 5 * 3
        else if (c == '8') result += "7222"; // 8 = 7 * 2 * 2 * 2
        else if (c == '9') result += "7332"; // 9 = 7 * 3 * 3 * 2
        else if (c >= '2') result += c;
	}
	sort(result.begin(), result.end(), greater<char>());
	return result;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string a;
		cin >> n >> a;
		string result = max_number_from_digits(a);
		cout << result << '\n';
	}	
	return 0;
}