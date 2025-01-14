#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		
		int ok = 1;
		for (int i = n - 2; i >= 0; i--){
			if (a[i] > a[i + 1]){
				ok = 1;
				sort(a + i, a + n, cmp);
				for (int j = i + 1; j < n; j++){
					if (a[i] > a[j]){
						swap(a[i], a[j]);
						break;
					}
				}
			}
			break;
		}
		if (!ok)
			for (int i = 0; i < n; i++)
				cout << i + 1 << " ";
		else for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
}
