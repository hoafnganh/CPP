#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int cnt = 1;
class SinhVien{
private:
	string msv, name, room;
	int d, m, y;
	float gpa;
public:
	SinhVien(){}

	float getGPA(){
		return gpa;
	}

	friend istream& operator>>(istream& is, SinhVien& sv){
		is.ignore();

		sv.msv = "B20DCCN";
		stringstream ss;
		ss << setw(3) << setfill('0') << cnt++;
		sv.msv += ss.str();

		getline(is, sv.name);
		is >> sv.room;
		char c;
		is >> sv.d >> c >> sv.m >> c >> sv.y;
		is >> sv.gpa;

		stringstream cc(sv.name);
		string word, ten = "";
		while(cc >> word){
			transform(word.begin(), word.end(), word.begin(), ::tolower);
			word[0] = toupper(word[0]);
			ten += word + " ";
		}
		sv.name = ten;


		return is;
	}


	friend ostream& operator<<(ostream& os, SinhVien& sv){
		os << sv.msv << " " << sv.name << sv.room << " " << setw(2) << setfill('0') << sv.d << '/' << setw(2) << setfill('0') << sv.m << '/' << setw(4) << setfill('0') << sv.y << " ";
		os << fixed << setprecision(2) << sv.gpa << endl;

		return os;
	}
};


void sapxep(SinhVien ds[], int n){
	sort(ds, ds + n, [](SinhVien a, SinhVien b){
		return a.getGPA() > b.getGPA();
	});
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}