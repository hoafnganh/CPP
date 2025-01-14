#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	int m, s;
	char a[100];
	cin >> m >> s;
	if (m == 1 && s == 0){
		cout << 0 << " " << 0;
		return 0;
	}
	if (s == 0 || s > 9 * m){
		cout << -1 << " " << -1;
		return 0;
	}
	//min
	vector<int> smallest(m, 0);
	smallest[0] = 1;
	int sum = s - 1;
	for (int i = m - 1; i > 0; i--){
		if (sum > 9){
			smallest[i] = 9;
			sum -= 9;
		}
		else {
			smallest[i] = sum;
			sum = 0;
		}
	}
		smallest[0] += sum; //phần còn lại cộng vào chữ số đầu tiên
	//max
	sum = s;
	vector<int> largest(m, 0);
	for (int i = 0; i < m; i++){
		if (sum > 9){
			largest[i] = 9;
			sum -= 9;
		}
		else {
			largest[i] = sum;
			sum = 0;
		}
	}
	for (int i = 0; i < m; i++)
		cout << smallest[i];
	cout << ' ';
	for (int i = 0; i < m; i++)
		cout << largest[i];
	return 0;
}