#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string binary(n, '0');
		for (int i = 0; i < pow(2, n); i++){
			cout << binary << " ";
			int tmp = n - 1;
			while(tmp >= 0 && binary[tmp] == '1'){
				binary[tmp] = '0';
				tmp--;
			}
			
			if (tmp >= 0)
				binary[tmp] = '1';
		}
		cout << '\n';
	}
}
