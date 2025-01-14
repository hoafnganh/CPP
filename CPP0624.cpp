#include<bits/stdc++.h>

using namespace std;

void chuan_hoa(string& s){
	transform(s.begin(), s.end(), s.begin(), ::toupper);
}

class SinhVien {
private:
	string name, msv, mail;
public:
	string major, room, phan_loai;
	SinhVien() {
	}
	
	friend istream& operator>>(istream& is, SinhVien& sv){
		is >> sv.msv;
		getline(is >> ws, sv.name);
		is >> sv.room >> sv.mail;
		sv.major = sv.msv.substr(3, 4);
		sv.phan_loai = sv.room[0];
		return is;
	}
	friend ostream& operator<<(ostream& os, SinhVien& sv){
		return os << sv.msv << " " << sv.name << " " << sv.room << " " << sv.mail << endl;
	}
	
};

int main(){
	int n;
	cin >> n;
	cin.ignore();
	SinhVien* ds = new SinhVien[1005];
	for (int i = 0; i < n; i++)
		cin >> ds[i];
	int q;
	cin >> q;
	cin.ignore();
	while(q--){
		string s;
		getline(cin >> ws, s);
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		stringstream ss(s);
		string word, nganh = "";
		while (ss >> word){
			nganh += word[0];
		}
		if (nganh == "CNTT")
			nganh = "CN";
		if (nganh == "ATTT")
			nganh = "AT";
		cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
		for (int i = 0; i < n; i++){
			if (nganh == "CN" || nganh == "AT"){
				if (ds[i].room[0] != 'E' && ds[i].major.find(nganh) != string::npos)
					cout << ds[i];
			}
			else if (ds[i].major.find(nganh) != string::npos){
				cout << ds[i];
			}
		}
			
		
	}
	return 0;
}
