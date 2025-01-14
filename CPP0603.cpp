#include<iostream>
#include<bits/stdc++.h>

using namespace std;



class SinhVien{
private:
	string msv, name, room, birthday;
	int d, m, y;
	float gpa;
public:
	SinhVien() {
		msv = "B20DCCN001";
		name = "";
		room = "";
		birthday = "";
		d = 0;
		m = 0;
		y = 0;
		gpa = 0.0;
	};

	friend istream& operator>>(istream &is, SinhVien& sv){
		getline(is, sv.name);
		getline(is, sv.room);
		char c;
		is >> sv.d >> c >> sv.m >> c >> sv.y;
		//getline(is, sv.birthday);
		is >> sv.gpa;

		stringstream ss(sv.name);
		string word, ten = "";
		while (ss >> word){
			transform(word.begin(), word.end(), word.begin(), ::tolower);
			word[0] = toupper(word[0]);
			ten += word + ' ';
		}
		sv.name = ten;
		// if (sv.birthday[1] == '/') sv.birthday.insert(0, "0");
		// if (sv.birthday[2] == '/') sv.birthday.insert(3, "0");

		return is;
	}

	friend ostream& operator<<(ostream& os,  SinhVien& sv){
		os << sv.msv << " ";
		os << sv.name << sv.room << " " 
		   << setw(2) << setfill('0') << sv.d << "/" << setw(2) << setfill('0') << sv.m << '/'
		   << setw(2) << setfill('0') << sv.y << " "
		   << fixed << setprecision(2) << sv.gpa;


		return os;
	}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}