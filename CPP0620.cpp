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
	string getMSV(){
		return msv;
	}
	friend istream& operator>>(istream& is, SinhVien& sv){
		is.ignore();
		is >> sv.msv;
		is.ignore();
		getline(is, sv.name);
		is >> sv.room >> sv.email;

		return is;
	}

	friend ostream& operator<<(ostream& os, SinhVien& sv){
		return os << sv.msv << " " << sv.name << " " << sv.room << " " << sv.email << endl;
	}
};

void sapxep(SinhVien ds[], int n){
	sort(ds, ds + n, [](SinhVien a, SinhVien b){
		if (a.getRoom() == b.getRoom())
			return a.getMSV() < b.getMSV();
		return a.getRoom() < b.getRoom();
	});
}

int main(){
	SinhVien* ds = new SinhVien[50];
	int n;
	
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ds[i];
	sapxep(ds, n);
	for (int i = 0; i < n; i++)
		cout << ds[i];
	
	return 0;
}