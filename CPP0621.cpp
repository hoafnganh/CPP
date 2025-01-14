#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class SinhVien{
private:
	string msv, name, room, email;
public:
	SinhVien() {}
	string getMSV(){
		return msv;
	}
	friend istream& operator>>(istream& is, SinhVien& sv){
		is >> sv.msv;
		is.ignore();
		getline(is, sv.name);
		is >> sv.room >> sv.email;
		//is.ignore();


		return is;
	}


	friend ostream& operator<<(ostream& os, SinhVien& sv){
		return os << sv.msv << " " << sv.name << " " << sv.room << " " << sv.email << endl;
	}
};


void sapxep(vector<SinhVien>& ds){
	sort(ds.begin(), ds.end(), [](SinhVien& a, SinhVien& b){
		return a.getMSV() < b.getMSV();
	});
}

int main(){
	SinhVien sv;	
	vector<SinhVien> ds;
	while (cin >> sv){
		ds.push_back(sv);
	}
	sapxep(ds);
	for (auto it : ds)
		cout << it;
	return 0;
}