#include<bits/stdc++.h>

using namespace std;
int cnt1 = 0, cnt2 = 0, cnt3 = 0;
class KhachHang;
class MatHang;
class HoaDon;


map<string,KhachHang> KH;
map<string,MatHang> MH;
class KhachHang{
public:
	string ma_kh, name, gender, birthday, address;
	friend istream& operator>>(istream& is, KhachHang& kh){
		scanf("\n");
		getline(is >> ws, kh.name);
		is >> kh.gender >> kh.birthday;
		getline(is >> ws, kh.address);
		kh.ma_kh = "KH";
		stringstream ss;
		ss << setw(3) << setfill('0') << cnt1++;
		kh.ma_kh += ss.str();
		KH[kh.ma_kh] = kh;
		return is;
	}
	
	
friend class HoaDon;
};

class MatHang{
public:
	string ma_mh, ten_mh, dvi;
	long long price, cost;
	friend istream& operator>>(istream& is, MatHang& mh){
		scanf("\n");
		getline(is >> ws, mh.ten_mh);
		getline(is >> ws, mh.dvi);
		is >> mh.price >> mh.cost;
		
		
		mh.ma_mh = "MH";
		stringstream ss;
		ss << setw(3) << setfill('0') << cnt2++;
		mh.ma_mh += ss.str();
		
		
		MH[mh.ma_mh] = mh;
		return is;
	}
	
friend class HoaDon;
};

class HoaDon{
private:
	string ma_hd, ma_kh, ma_mh;
	long long numb;
public:
	 
	HoaDon(){
	};
	friend istream& operator>>(istream& is, HoaDon& hd){
		
		is >> hd.ma_kh >> hd.ma_mh >> hd.numb; 
		hd.ma_hd = "HD";
		stringstream ss;
		ss << setw(3) << setfill('0') << cnt3++;
		hd.ma_hd += ss.str();
		return is;
	}
	
	friend ostream& operator<<(ostream& os, HoaDon& hd){
		return os << hd.ma_hd << " " << KH[hd.ma_kh].name << " " << KH[hd.ma_kh].address << " " << MH[hd.ma_mh].ten_mh << " " << MH[hd.ma_mh].dvi << " " << MH[hd.ma_mh].price << " " << MH[hd.ma_mh].cost << " " << hd.numb << " " << MH[hd.ma_mh].cost * hd.numb << endl;
	}
	
	
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}




