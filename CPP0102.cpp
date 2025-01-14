#include<iostream>
#include<stdio.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		char a;
		cin >> a;
		if (a >= 'a' && a <= 'z')
			cout << (char)(a - 32) << "\n";
		else 
		    cout << (char)(a + 32) << "\n";
	}
	return 0;
}
