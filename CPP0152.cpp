#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, m;
		cin >> a >> m;
		int x = INT_MAX;
		for (int i = 0; i < m; i++){
			if (a * i % m == 1)
				x = i;
		}
		if (x == INT_MAX)
			cout << -1 << endl;
		else cout << x << endl;
	}
	return 0;
}
