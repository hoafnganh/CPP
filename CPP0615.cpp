#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int cnt = 1;
class NhanVien {
private:
	string mnv, name, gender, address, ma_thue, cday;
	int d, m, y;
public:
	NhanVien() {}

	int getDay(){
		return d;
	}
	int getMonth(){
		return m;
	}
	int getYear(){
		return y;
	}

	friend istream& operator>>(istream& is, NhanVien& nv){
		is.ignore();
		getline(is, nv.name);
		is >> nv.gender;
		char c;
		is >> nv.m >> c >> nv.d >> c >> nv.y;
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
		return os << nv.mnv << " " << nv.name << " " << nv.gender << " " 
		<< setw(2) << setfill('0') << nv.m << '/'
		<< setw(2) << setfill('0') << nv.d << '/'
		<< setw(4) << setfill('0') << nv.y
		<< " " << nv.address << " " << nv.ma_thue << " " << nv.cday << endl;
	}
};

void sapxep(NhanVien ds[], int n){
	sort(ds, ds + n, [](NhanVien a, NhanVien b){
		if (a.getYear() == b.getYear()){
			if (a.getMonth() == b.getMonth())
				return a.getDay() < b.getDay();
			return a.getMonth() < b.getMonth();
		}
		return a.getYear() < b.getYear();
	});
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}