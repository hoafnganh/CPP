#include <bits/stdc++.h>
using namespace std;

int cnt = 1;

class HocVien {
private:
    string ten, lop, msv;
    int ngay, thang, nam;
    float gpa;

public:
    HocVien() {};

    void chuanHoa() {
        stringstream ss(this->ten);
        string ten = "", word;
        while (ss >> word) {
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            word[0] ^= 32;
            ten += word + ' ';
        }
        this->ten = ten;
    }

    friend istream& operator >> (istream& is, HocVien& hv) {
        getline(is >> ws, hv.ten);
        char deli;
        is >> hv.lop >> hv.ngay >> deli >> hv.thang >> deli >> hv.nam >> hv.gpa;
        hv.chuanHoa();

        if (cnt < 10) 
            hv.msv = "B20DCCN00" + to_string(cnt++);
        else
            hv.msv = "B20DCCN0" + to_string(cnt++);

        return is;
    }

    friend ostream& operator << (ostream& os, HocVien hv) {
       return os << hv.msv << ' '
           << hv.ten
           << hv.lop << ' '
           << setw(2) << setfill('0') << hv.ngay << '/'
           << setw(2) << setfill('0') << hv.thang << '/'
           << setw(4) << setfill('0') << hv.nam << ' '
           << setprecision(2) << fixed << hv.gpa << endl;
    }

    float getGPA() { return this->gpa; }
};

void sapxep(HocVien ds[], int n) {
    sort(ds, ds + n, [&] (HocVien a, HocVien b) {
        return a.getGPA() > b.getGPA();
    });
}

int main(){
    HocVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}