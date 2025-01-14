#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Age{
	string name;
	int d, m, y;
	char c;
};

void nhap(Age ds[], int n){
	for (int i = 0; i < n; i++) {
        cin >> ds[i].name;
        cin >> ds[i].d >> ds[i].c >> ds[i].m >> ds[i].c >> ds[i].y;
    }
}

void sapxep(Age ds[], int n){
	sort(ds, ds + n,[](Age A, Age B){
		if (A.y == B.y){
			if (A.m == B.m)
				return A.d < B.d;
			return A.m < B.m;
		}
		return A.y < B.y;
	});
}

void in(Age ds[], int n){
	cout << ds[n - 1].name << "\n" << ds[0].name;
}

int main(){
	struct Age ds[50];
	int n;
	cin >> n;
	nhap(ds, n);
	sapxep(ds, n);
	in(ds, n);
	return 0;
}