#include<bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int f[1005];
		int ans = 0;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		for (int i = 1; i <= n; i++){
			f[i] = 1;
			for (int j = 1; j < i; j++){
				if (a[j] < a[i]){
					f[i] = max(f[i], f[j] + 1);
				}
			}
			ans = max(ans, f[i]);
		}
		cout << ans << endl;
	}
	
	return 0;
}
