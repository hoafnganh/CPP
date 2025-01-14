#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long s = 0;

void Do(string a){
	if (a.size() > 10) return;
	int pos = 0;
	if (a[0] == '-') pos = 1;
	for (int i = pos; i < a.size(); i++)
		if (a[i] < '0' || a[i] > '9') return;
	long long ss = 0;
	for (int i = pos; i < a.size(); i++){
		ss = ss * 10 + a[i] - '0';
	}
	if (pos == 1) ss = ss * (-1);
	if (ss <= INT_MAX && ss >= INT_MIN) s += ss;
}

int main(){
	freopen("DATA.in", "r", stdin);
	string a;
	while(cin >> a){
		Do(a);
	}
	cout << s;
	return 0;
}