#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class SinhVien{
private:
	string msv, name, room, email;
public:
	SinhVien() {}

	string getRoom(){
		return room;
	}

	friend istream& operator>>(istream& is, SinhVien& sv){
		
		is >> sv.msv;
		is.ignore();
		getline(is, sv.name);
		is >> sv.room >> sv.email;
		is.ignore();
		return is;
	}

	friend ostream& operator<<(ostream& os, SinhVien& sv){
		return os << sv.msv << " " << sv.name << " " << sv.room << " " << sv.email << endl; 
	}
};

int main(){
	int n;
	cin >> n;
	vector<SinhVien> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	int q;
	cin >> q;
	while(q--){
		string s;
		cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
		for (int i = 0; i < n; i++){
			if (v[i].getRoom().find(s) != string::npos)
				cout << v[i];
		}
	}
	return 0;
}