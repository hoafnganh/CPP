#include<iostream>
#include<stdio.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for (int i = 2; i * i <= n; i++){
			int cnt = 0;
			if(n % i == 0){
				while (n % i == 0){
					cnt++;
					n /= i;
				}
				cout << i << " " << cnt << " ";
				cnt = 0;
			}
		}
		if (n != 1)
			cout << n << " " << 1;
		cout << "\n";
	}
	return 0;
}

