#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void correct(string &s){
	if (islower(s[0]))
		s[0] -= 32;
	for (int i = 1; i < s.size(); i++){
		if (isupper(s[i]))
			s[i] += 32;
	}
}

void chuan_hoa(string& name){
	for (int i = 0; i < name.size(); i++){
		name[i] = tolower(name[i]);
	}
	stringstream ss(name);
	string word;
	vector<string> v;
	while(ss >> word){
		v.push_back(word);
	}
	for (int i = 0; i < v.size(); i++){
		correct(v[i]);
	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}

struct SinhVien{
	string name, room;
	int d, m, y;
	char c;
	float gpa;
};

void nhap(SinhVien ds[], int n){
	cin.ignore();
	for (int i = 0; i < n; i++){
		getline(cin, ds[i].name);
		cin >> ds[i].room;
		cin >> ds[i].d >> ds[i].c >> ds[i].m >> ds[i].c >> ds[i].y;
		cin >> ds[i].gpa;
		cin.ignore();
	}
}

void in(SinhVien ds[], int n){
	for (int i = 0; i < n; i++){
		cout << "B20DCCN" << setw(3) << setfill('0') << i + 1 << " ";
		chuan_hoa(ds[i].name);
		cout << ds[i].room << " ";
		cout << setw(2) << setfill('0') << ds[i].d << '/' << setw(2) << setfill('0') << ds[i].m << '/' << ds[i].y << " ";
		cout << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}