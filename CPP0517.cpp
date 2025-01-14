#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	string name, gender, birthday, address, ma_thue, cday;
};

void nhap(NhanVien &x){
	cin.ignore();
	getline(cin, x.name);
	cin >> x.gender;
	cin >> x.birthday;
	cin.ignore();
	getline(cin, x.address);
	cin >> x.ma_thue;
	cin >> x.cday;
	}

void inds(NhanVien ds[], int N){
	for(int i = 1; i <= N; i++){
		cout << setw(5) << setfill('0') << i << " ";
		cout << ds[i - 1].name << " ";
		cout << ds[i - 1].gender << " ";
		cout << ds[i - 1].birthday << " ";
		cout << ds[i - 1].address << " ";
		cout << ds[i - 1].ma_thue << " ";
		cout << ds[i - 1].cday << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}