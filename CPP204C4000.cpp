#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string name, room, birthday;
	float gpa;
	int day, month, year;
	char deli;
};

void nhapThongTinSV(SinhVien &x){
	getline(cin, x.name);
	cin >> x.room;
	cin.ignore();
	cin >> x.day >> x.deli >> x.month >> x.deli >> x.year;
	cin >> x.gpa;
}

void inThongTinSV(const SinhVien &x){
	cout << "N20DCCN001 " << x.name << " " << x.room << " ";
	cout << setfill('0') << setw(2) << x.day << '/' << setfill('0') << setw(2) << x.month << '/' << x.year << " ";
	cout << fixed << setprecision(2) << x.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}