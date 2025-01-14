#include<iostream>
#include<stdio.h>

using namespace std;

bool check(int n){
	int cnt = 0, odd = 0, even = 0;
	while(n){
		int k = n % 10;
		cnt++;
		if (k % 2 == 0) even++;
		else odd++;
		n /= 10;
	}
	if(odd == even && cnt % 2 == 0) return true;
	else return false;
}

int main(){
	int n;
	cin >> n;
	int start = 1;
	for (int i = 1; i < n; i++)
		start *= 10;
	int end = start * 10 - 1;
	long long cnt = 0;
	for (int i = start; i <= end; i++){
		if (check(i)){
			cout << i << " ";
			cnt++;
		}
		if (cnt == 10){
			cout << "\n";
			cnt = 0;
		}
	}
	return 0;
}

