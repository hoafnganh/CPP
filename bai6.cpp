#include <bits/stdc++.h>
using namespace std;

typedef struct Person {
    string name, lower_name, id;
} Person;

int main() {
    int n;
    cin >> n;
    vector<Person> per(n);
    string sub;

    for (int i = 0; i < n; ++i) {
        getline(cin >> ws, per[i].name);
        getline(cin >> ws, sub);

        per[i].lower_name = per[i].name;
        transform(per[i].lower_name.begin(), per[i].lower_name.end(), per[i].lower_name.begin(), ::tolower);
        
        per[i].id = "GV" + string(3 - to_string(i + 1).length(), '0') + to_string(i + 1);
    }

    int q;
    cin >> q;
    cin.ignore();  

    while (q--) {
        string s;
        getline(cin, s);

        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ':' << endl;

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        for (const auto& person : per) {
            if (person.lower_name.find(s) != string::npos) {
                cout << person.id << ' ' << person.name << endl;
            }
        }
        cout << endl;  
    }

    return 0;
}


