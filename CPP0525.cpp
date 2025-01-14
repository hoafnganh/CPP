#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct SinhVien {
	string id, name, room;
	float s1, s2, s3;
};

void nhap(SinhVien& x){
	cin.ignore();
	getline(cin, x.id);
	getline(cin, x.name);
	getline(cin, x.room);
	cin >> x.s1 >> x.s2 >> x.s3;
}

void sap_xep(SinhVien ds[], int n){
	sort(ds, ds + n, [](SinhVien A, SinhVien B){
		return A.name < B.name;
	});
}

void in_ds(SinhVien ds[], int n){
	for (int i = 0; i < n; i++){
		cout << i + 1 << " " << ds[i].id << " " << ds[i].name << " " << ds[i].room << " ";
		cout << fixed << setprecision(1) << ds[i].s1 << " "
			 << fixed << setprecision(1) << ds[i].s2 << " "
			 << fixed << setprecision(1) << ds[i].s3 << "\n";
	} 
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}