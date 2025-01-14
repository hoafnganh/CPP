#include<bits/stdc++.h>

using namespace std;
int cnt = 1;
class GiangVien {
private:
	string name, major, mgv, ten;
public:
	
	GiangVien() {
	};
	
	
	friend istream& operator>>(istream& is, GiangVien& gv){
		getline(is >> ws, gv.name);
		getline(is >> ws, gv.major);
		
		
		gv.mgv = "GV";
		stringstream ss;
		ss << setw(2) << setfill('0') << cnt++;
		gv.mgv += ss.str();
		
		
		stringstream cc(gv.name);
		string word;
		vector<string> v;
		while(cc >> word){
			v.push_back(word);
		}
		gv.ten += v[v.size() - 1];
		
		return is;
	}
	
	friend ostream& operator<<(ostream& os, GiangVien& gv){
		stringstream ss(gv.major);
		string word, nganh = "";
		while(ss >> word){
			transform(word.begin(), word.end(), word.begin(), ::toupper);
			nganh += word[0];
		}
		gv.major = nganh;
		return os << gv.mgv << " " << gv.name << " " << gv.major << endl;
	}
	string getMGV(){
		return mgv;
	}
	string getTen(){
		return ten;
	}
};

void sapxep(GiangVien ds[], int n){
	sort(ds, ds + n, [](GiangVien a, GiangVien b){
		if(a.getTen() == b.getTen())
			return a.getMGV() < b.getMGV();
		return a.getTen() < b.getTen();
	});
}


int main(){
	int n;
	cin >> n;
	cin.ignore();
	GiangVien ds[50];
	for (int i = 0; i < n; i++)
		cin >> ds[i];
	sapxep(ds, n);
	for (int i = 0; i < n; i++)
		cout << ds[i];
	return 0;
}
