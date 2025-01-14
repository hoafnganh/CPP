#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct ThiSinh{
	string name, birthday;
	float s1, s2, s3;
	void display(){
		cout << name << " " << birthday << " " << fixed << setprecision(1) << s1 + s2 + s3;
	}
};

void nhap(ThiSinh &a){
	getline(cin, a.name);
	getline(cin, a.birthday);
	cin >> a.s1 >> a.s2 >> a.s3;
}

void in(const ThiSinh &a){
		cout << a.name << " " << a.birthday << " " << fixed << setprecision(1) << a.s1 + a.s2 + a.s3;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

