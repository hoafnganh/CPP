#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct SinhVien {
	string name, room;
	int day, month, year;
	float gpa;
	char deli;
};

void nhap(SinhVien &x){
	getline(cin, x.name);
	getline(cin, x.room);
	cin >> x.day >> x.deli >> x.month >> x.deli >> x.year;
	cin >> x.gpa;
}

void in(const SinhVien &x){
	cout << "B20DCCN001" << " " << x.name << " " << x.room << " ";
	cout << setfill('0') << setw(2) << x.day << '/' << setfill('0') << setw(2) << x.month << '/' << x.year << " ";
	cout << fixed << setprecision(2) << x.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}