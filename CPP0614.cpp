#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int cnt = 1;
class NhanVien{
private:
	string mnv, name, gender, birthday, address, ma_thue, cday;
public:
	NhanVien() {
		mnv = "";
		name = "";
		gender = "";
		birthday = "";
		address = "";
		ma_thue = "";
		cday = "";
	}

	friend istream& operator>>(istream& is, NhanVien& nv){
		
		is.ignore();
		getline(is, nv.name);
		is >> nv.gender >> nv.birthday;
		is.ignore();
		getline(is, nv.address);
		is >> nv.ma_thue >> nv.cday;

		nv.mnv = "";
		stringstream ss;
		ss << setw(5) << setfill('0') << cnt++;
		nv.mnv += ss.str();
		return is;
	}


	friend ostream& operator<<(ostream& os, NhanVien& nv){
		os << nv.mnv << " " << nv.name << " " << nv.gender << " " << nv.birthday << " " << nv.address
		   << " " << nv.ma_thue << " " << nv.cday << endl;
		
		return os;
	}
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

