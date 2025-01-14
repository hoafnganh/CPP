#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define PI 3.141592653589793238

struct Point{
	float x, y;
	void nhap(){
		cin >> x >> y;
	}
};

int check(Point A, Point B, Point C){
	return (A.x - B.x) * (A.y - C.y) != (A.x - C.x) * (A.y - B.y);
}

float distance(Point A, Point B){
	return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

void result(){
	Point A, B, C;
	A.nhap();
	B.nhap();
	C.nhap();
	if (!check(A, B, C)){
		cout << "INVALID\n";	
		return;
	}
	double a = distance(B, C);
	double b = distance(A, C);
	double c = distance(A, B);
	double s = (a + b + c) / 2;
	double area = sqrt(s * (s - a) * (s - b) * (s - c));
	double r = (a * b * c) / (4 * area);
	double S = PI * r * r;
	cout << fixed << setprecision(3) << S << '\n';
}

int main(){
	int t;
	cin >> t;
	while(t--){
		result();
	}
	return 0;
}

