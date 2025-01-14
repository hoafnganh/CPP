#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct MatHang{
	int numb;
	string name;
	string group;
	float cost, sold;
};

void nhap(MatHang ds[], int n){
	cin.ignore();
	for (int i = 0; i < n; i++){
		getline(cin, ds[i].name);
		getline(cin, ds[i].group);
		cin >> ds[i].cost >> ds[i].sold;
		ds[i].numb = i + 1;
		cin.ignore();
	}
}

void sapxep(MatHang ds[], int n){
	sort(ds, ds + n, [](MatHang A, MatHang B){
		return (A.sold - A.cost) > (B.sold - B.cost);
	});
}

void in(MatHang ds[], int n){
	for (int i = 0; i < n; i++){
		cout << ds[i].numb << " ";
		cout << ds[i].name << " ";
		cout << ds[i].group << " ";
		cout << fixed << setprecision(2) << (float)(ds[i].sold - ds[i].cost) << "\n";
	}
}

int main(){
	struct MatHang ds[50];
	int N;
	cin >> N;
	nhap(ds, N);
	sapxep(ds, N);
	in(ds, N);
	return 0;
}