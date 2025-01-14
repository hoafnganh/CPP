#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct ThucTap{
	int stt;
	string msv, name, room, email, company;
};

void nhap(ThucTap ds[], int n){
	cin.ignore();
	for (int i = 0; i < n; i++){
		cin >> ds[i].msv;
		cin.ignore();
		getline(cin, ds[i].name);
		cin >> ds[i].room;
		cin >> ds[i].email;
		cin >> ds[i].company;
		ds[i].stt = i + 1;

	}
}

void sapxep(ThucTap ds[], int n){
	sort(ds, ds + n, [](ThucTap a, ThucTap b){
		return a.msv < b.msv;
	});
}

void in(ThucTap ds[], int n, string& comp){
	for (int i = 0; i < n; i++)
		if (ds[i].company == comp)
		 	cout << ds[i].stt << " " << ds[i].msv << " " << ds[i].name << " " << ds[i].room << " " << ds[i].email << " " << ds[i].company << endl;
}

int main(){
	int n;
	cin >> n;
	struct ThucTap ds[50];
	nhap(ds, n);
	sapxep(ds, n);
	int q;
	cin >> q;
	while(q--){
		string comp;
		cin >> comp;
		in(ds, n, comp);
	}
	return 0;
}