// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// void correct(string &s){
// 	if (islower(s[0]))
// 		s[0] -= 32;
// 	for (int i = 1; i < s.size(); i++){
// 		if (isupper(s[i]))
// 			s[i] += 32;
// 	}
// }

// void chuan_hoa(string& name){
// 	for (int i = 0; i < name.size(); i++){
// 		name[i] = tolower(name[i]);
// 	}
// 	stringstream ss(name);
// 	string word;
// 	vector<string> v;
// 	while(ss >> word){
// 		v.push_back(word);
// 	}
// 	for (int i = 0; i < v.size(); i++){
// 		correct(v[i]);
// 	}
// 	for (int i = 0; i < v.size(); i++)
// 		cout << v[i] << " ";
// }

// struct SinhVien{
// 	string name, room, masv;
// 	int d, m, y;
// 	char c;
// 	float gpa;
// };

// void nhap(SinhVien ds[], int n){
// 	cin.ignore();
// 	for (int i = 0; i < n; i++){
// 		getline(cin, ds[i].name);
// 		cin >> ds[i].room;
// 		cin >> ds[i].d >> ds[i].c >> ds[i].m >> ds[i].c >> ds[i].y;
// 		cin >> ds[i].gpa;
// 		if(i<9) ds[i].masv="B20DCCN00";
// 		else ds[i].masv="B20DCCN0";
// 		ds[i].masv=ds[i].masv+to_string(i+1);
// 		cin.ignore();
// 	}
// }

// void sapxep(SinhVien ds[], int n){
// 	sort(ds, ds + n, [](SinhVien a, SinhVien b){
// 		return a.gpa > b.gpa;
// 	});
// }

// void in(SinhVien ds[], int n){
// 	for (int i = 0; i < n; i++){
// 		cout << ds[i].masv << " ";
// 		chuan_hoa(ds[i].name);
// 		cout << ds[i].room << " ";
// 		cout << setw(2) << setfill('0') << ds[i].d << '/' << setw(2) << setfill('0') << ds[i].m << '/' << ds[i].y << " ";
// 		cout << fixed << setprecision(2) << ds[i].gpa << endl;
// 	}
// }

// int main(){
//     struct SinhVien ds[50];
//     int N;
//     cin >> N;
//     nhap(ds, N);
//     sapxep(ds, N);
//     in(ds, N);
//     return 0;
// }
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void correct(string &s) {
    if (islower(s[0]))
        s[0] -= 32;
    for (int i = 1; i < s.size(); i++) {
        if (isupper(s[i]))
            s[i] += 32;
    }
}

void chuan_hoa(string& name) {
    for (int i = 0; i < name.size(); i++) {
        name[i] = tolower(name[i]);
    }
    stringstream ss(name);
    string word;
    vector<string> v;
    while(ss >> word) {
        v.push_back(word);
    }
    for (int i = 0; i < v.size(); i++) {
        correct(v[i]);
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

struct SinhVien {
    string name, room, msv;
    int d, m, y;
    char c;
    float gpa;
};

void nhap(SinhVien ds[], int n) {
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, ds[i].name);
        cin >> ds[i].room;
        cin >> ds[i].d >> ds[i].c >> ds[i].m >> ds[i].c >> ds[i].y;
        cin >> ds[i].gpa;
        ds[i].msv = "B20DCCN" + string(3 - to_string(i + 1).size(), '0') + to_string(i + 1);
        cin.ignore();
    }
}

void sapxep(SinhVien ds[], int n) {
    sort(ds, ds + n, [](SinhVien a, SinhVien b) {
        return a.gpa > b.gpa;  // Sắp xếp theo GPA giảm dần
    });
}

void in(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        // Gán mã sinh viên theo thứ tự mới sau khi sắp xếp
    	cout << ds[i].msv << " ";
        chuan_hoa(ds[i].name);
        cout << ds[i].room << " ";
        cout << setw(2) << setfill('0') << ds[i].d << '/' << setw(2) << setfill('0') << ds[i].m << '/' << ds[i].y << " ";
        cout << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main() {
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}
