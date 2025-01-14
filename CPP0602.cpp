#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class SinhVien {
private:
	string msv, name, room, birthday;
	
	char c;
	float gpa;
public:
	SinhVien() {
		msv = "B20DCCN001";
		name = "";
		room = "";
		birthday = "";
		gpa = 0.0;
	};
	friend istream& operator>>(istream& is, SinhVien& sv){
		getline(is, sv.name);
		getline(is, sv.room);
		getline(is, sv.birthday);
		is >> sv.gpa;

		if (sv.birthday[1] == '/') sv.birthday.insert(0, "0");
		if (sv.birthday[4] == '/') sv.birthday.insert(3, "0");

		return is;
	}

	friend ostream& operator<<(ostream& os, const SinhVien& sv){
		os << sv.msv << " " << sv.name << " " << sv.room << " " << sv.birthday << " " << fixed << setprecision(2) << sv.gpa;

		return os;	
	}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}