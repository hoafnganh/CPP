#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int cnt = 1;

class SinhVien{
private:
	string msv, name, room, birthday;
	float gpa;
public:
	SinhVien() {
		msv = "";
		name = "";
		room = "";
		birthday = "";
		gpa = 0.0;
	}
	friend istream& operator>>(istream& is, SinhVien& sv){
		sv.msv = "B20DCCN";

		stringstream ss;
		ss << setw(3) << setfill('0') << cnt++;
		sv.msv += ss.str();
		is.ignore();
		getline(is, sv.name);
		getline(is, sv.room);
		getline(is, sv.birthday);
		is >> sv.gpa;

		if (sv.birthday[1] == '/') sv.birthday.insert(0, "0");
		if (sv.birthday[4] == '/') sv.birthday.insert(3, "0");
		return is;
	}

	friend ostream& operator<<(ostream& os, SinhVien& sv){
		os << sv.msv << " " << sv.name << " " << sv.room << " " << sv.birthday << " " << fixed << setprecision(2) << sv.gpa;
		os << endl;
		return os;
	}
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}