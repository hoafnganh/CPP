#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class NhanVien{
private:
	string mnv, name, gender, birthday, address, ma_thue, cday;
public:
	NhanVien(){}
	friend istream& operator>>(istream& is, NhanVien& nv){
		nv.mnv = "00001";
		getline(is, nv.name);
		is >> nv.gender >> nv.birthday;
		is.ignore();
		getline(is, nv.address);
		is >> nv.ma_thue >> nv.cday;

		return is;
	}

	friend ostream& operator>>(ostream& os, NhanVien& nv){
		os << nv.mnv << " " << nv.name << " " << nv.gender << " " << nv.birthday << " " << nv.address << " " << nv.ma_thue << " " << nv.cday;
		return os;
	}
};

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}