#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct NhanVien {
    string id, name, gender, address, ma_thue;
    int m1, d1, y1;
    char c1;
    int d2, m2, y2;
    char c2;
};

int employeeCount = 0;  // Biến toàn cục để theo dõi số thứ tự của nhân viên

// Hàm nhập thông tin cho từng nhân viên
void nhap(NhanVien &ds) {
    cin.ignore();
    getline(cin, ds.name);
    getline(cin, ds.gender);
    cin >> ds.m1 >> ds.c1 >> ds.d1 >> ds.c1 >> ds.y1;  // Nhập ngày sinh
    cin.ignore();
    getline(cin, ds.address);
    cin >> ds.ma_thue;
    cin >> ds.d2 >> ds.c2 >> ds.m2 >> ds.c2 >> ds.y2;  // Nhập ngày bắt đầu làm việc

    // Cập nhật ds.id: sử dụng stringstream để tạo chuỗi có độ dài 5 ký tự với các số 0 ở đầu
    stringstream ss;
    ss << setw(5) << setfill('0') << ++employeeCount;
    ds.id = ss.str();
}

// Hàm sắp xếp danh sách nhân viên theo ngày sinh
void sapxep(NhanVien ds[], int n){
    sort(ds, ds + n, [](NhanVien A, NhanVien B){
        if (A.y1 == B.y1){
            if(A.m1 == B.m1){
                return A.d1 < B.d1;
            }
            return A.m1 < B.m1;
        }
        return A.y1 < B.y1;
    });
}

// Hàm in thông tin danh sách nhân viên
void inds(NhanVien ds[], int n){
    for (int i = 0; i < n; i++){
        cout << ds[i].id << " ";
        cout << ds[i].name << " ";
        cout << ds[i].gender << " ";
        cout << setw(2) << setfill('0') << ds[i].m1 << "/" 
             << setw(2) << setfill('0') << ds[i].d1 << "/"
             << ds[i].y1 << " ";
        cout << ds[i].address << " ";
        cout << ds[i].ma_thue << " ";
        cout << setw(2) << setfill('0') << ds[i].d2 << "/" 
             << setw(2) << setfill('0') << ds[i].m2 << "/"
             << ds[i].y2 << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        nhap(ds[i]);
    }
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
