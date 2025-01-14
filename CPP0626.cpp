#include<bits/stdc++.h>

using namespace std;

void chuan_hoa(string& s){
	stringstream ss(s);
	string word, mon_hoc = "";
	while(ss >> word){
		transform(word.begin(), word.end(), word.begin(), ::toupper);
		mon_hoc += word[0];
	}
	s = mon_hoc;
}
int cnt = 1;
class GiangVien{
private:
	string name, subject, mgv;
public:
	GiangVien() {};
	
	friend istream& operator>>(istream& is, GiangVien& gv){
		getline(is >> ws, gv.name);
		getline(is >> ws, gv.subject);
		
		return is;
	}
	string getSubject(){
		string tmp = subject;
		chuan_hoa(tmp);
		return tmp;
	}
	friend ostream& operator<<(ostream& os, GiangVien& gv){
		gv.mgv = "GV";
		stringstream ss;
		ss << setw(2) << setfill('0') << cnt++;
		gv.mgv += ss.str();
		
		chuan_hoa(gv.subject);
		return os << gv.mgv << " " << gv.name << " " << gv.subject << endl;
	}	
};

int main(){
	GiangVien ds[50];
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++){
		cin >> ds[i];
	}
	int q;
	cin >> q;
	cin.ignore();
	while(q--){
		
		string s;
		getline(cin >> ws, s);
		chuan_hoa(s);
		
		cout << "DANH SACH GIANG VIEN BO MON " << s << ":" << endl;
		for (int i = 0; i < n; i++){
			if(ds[i].getSubject() == s){
				cout << ds[i];
			}
		}
		
	}
	
	return 0;
}


