#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		int s = 0, b = 0;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (a[i] <= k) s++;
		}
		for (int i = 0; i < s; i++){
			if (a[i] > k) b++;
		}
		int ss = b;
		for (int i = 0, j = s; j < n; i++, j++){
			if (a[j] > k) b++;
			if (a[i] > k) b--;
			ss = min(ss, b);
		}
		
		cout << ss << endl;
	}
	return 0;
}
