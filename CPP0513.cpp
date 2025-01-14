#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string name;
	string room;
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
		cout << "B20DCCN" << setw(3) << setfill('0') << i + 1<< " ";
		cout << ds[i].name << " ";
		cout << ds[i].room << " ";
		cout << setw(2) << setfill('0') << ds[i].d << '/' << setw(2) << setfill('0') << ds[i].m << '/' << ds[i].y << " ";
		cout <<  fixed << setprecision(2) << ds[i].gpa << endl;
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