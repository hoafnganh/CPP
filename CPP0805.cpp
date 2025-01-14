#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
	ifstream input1("DATA1.in");
	ifstream input2("DATA2.in");
	set<string> se1, se2;
	string word1, word2;
	while(input1 >> word1){
		transform(word1.begin(), word1.end(), word1.begin(), ::tolower);
		se1.insert(word1);
	}
	while(input2 >> word2){
		transform(word2.begin(), word2.end(), word2.begin(), ::tolower);
		se2.insert(word2);
	}
	set<string> giao;
	set<string> hop;
	set_intersection(se1.begin(), se1.end(), se2.begin(), se2.end(), inserter(giao, giao.begin()));
	set_union(se1.begin(), se1.end(), se2.begin(), se2.end(), inserter(hop, hop.end()));
	for (auto it1 : hop)
		cout << it1 << " ";
	cout << endl;
	for (auto it2 : giao)
		cout << it2 << " ";
	input2.close();
	input1.close();
	return 0;
}