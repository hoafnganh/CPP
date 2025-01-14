#include<iostream>
#include<stdio.h>

using namespace std;
int c[1000001];

void sang(){
	for (int i = 0; i < 1000001; i++)
		c[i] = 1;
	c[0] = c[1] = 0;
	for (int i = 2; i * i < 1000001; i++){
		if (c[i] == 1){
			for (int j = i * i; j < 1000001; j += i)
				c[j] = 0;
		}
	}
}

int main(){
	sang();
	int a, b;
	cin >> a >> b;
	if (a > b)
		swap(a, b);
	for (int i = a; i <= b; i++){
		if (c[i])
			cout << i << " ";
	}
	return 0;
}

