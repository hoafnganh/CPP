#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct SinhVien {
	string name;
	string room;
	int day, month, year;
	char c;
	float gpa;
	void nhap(){
		getline(cin, name);
		cin >> room;
		cin >> day >> c >> month >> c >> year;
		cin >> gpa;
	}
	void xuat(){
		cout << "B20DCCN001 ";
		cout << name << " ";
		cout << room << " ";
		cout << setw(2) << setfill('0') << day << "/" <<  setw(2) << setfill('0') << month << "/" << year << " ";
		cout << fixed << setprecision(2) << gpa;
	}

};



int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}