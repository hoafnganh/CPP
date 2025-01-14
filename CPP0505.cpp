#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	string name, gender, birthday, address, cday;
	long long code;
};

void nhap(NhanVien &x){
	getline(cin, x.name);
	cin >> x.gender;
	cin.ignore();
	getline(cin, x.birthday);
	getline(cin, x.address);
	cin >> x.code;
	cin.ignore();
	getline(cin, x.cday);
}

void in(const NhanVien &x){
	cout << "00001 " << x.name << " " << x.gender << " " << x.birthday << " " << x.address << " ";
	cout << x.code << " " << x.cday;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}