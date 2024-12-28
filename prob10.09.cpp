#prob10.09: Viết chương trình nhập xuất đa thức một biến f(x). Sau đó nhập giá trị biến x
và tính giá trị f(x) với kết quả hiển thị chính xác 2 số sau dấu thập phân

#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

struct DonThuc {
    double heSo; 
    int soMu;    
};

struct DATHUC {
    vector<DonThuc> donThuc;
};

DATHUC* Nhap() {
    DATHUC* dt = new DATHUC();
    int soLuong;
    cin >> soLuong; 
    for (int i = 0; i < soLuong; i++) {
        DonThuc temp;
        cin >> temp.heSo >> temp.soMu; 
        dt->donThuc.push_back(temp);
    }
    return dt;
}

void Xuat(const DATHUC& dt) {
    bool isFirst = true; 
    for (const auto& donThuc : dt.donThuc) {
        if (donThuc.heSo == 0) continue;

        
        if (!isFirst) {
            if (donThuc.heSo > 0) cout << "+";
        } else {
            isFirst = false;
        }

        if (abs(donThuc.heSo) != 1 || donThuc.soMu == 0) {
            cout << donThuc.heSo;
        } else if (donThuc.heSo == -1) {
            cout << "-";
        }

        if (donThuc.soMu > 0) {
            cout << "x";
            if (donThuc.soMu > 1) {
                cout << "^" << donThuc.soMu;
            }
        }
    }
    if (isFirst) cout << "0"; 
}

double TinhDaThuc(const DATHUC& dt, double x) {
    double ketQua = 0;
    for (const auto& donThuc : dt.donThuc) {
        ketQua += donThuc.heSo * pow(x, donThuc.soMu);
    }
    return ketQua;
}
