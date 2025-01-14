#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Time{
	int h, m, s;
};

void nhap(Time ds[], int n){
	for (int i = 0; i < n; i++){
		cin >> ds[i].h >> ds[i].m >> ds[i].s;
	}
}

void sapxep(Time ds[], int n){
	sort(ds, ds + n,[](Time a, Time b){
		if (a.h == b.h){
			if (a.m == b.m)
				return a.s < b.s;
			return a.m < b.m;
		}
		return a.h < b.h;
	});
}

void in(Time ds[], int n){
	for (int i = 0; i < n; i++){
		cout << ds[i].h << " " << ds[i].m << " " << ds[i].s << '\n';
	}
}

int main(){
	int n;
	cin >> n;
	struct Time *ds = new Time[n];
	nhap(ds, n);
	sapxep(ds, n);
	in(ds, n);
	return 0;
}