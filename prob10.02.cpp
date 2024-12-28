#pob10.02: Dùng cấu trúc struct để biểu diễn phân số. Viết hàm so sánh hai phân số.
Định nghĩa: Phân số là sự biểu diễn số hữu tỉ dưới dạng tỉ lệ của hai số nguyên, trong đó số ở trên được gọi là tử số, còn số ở dưới được gọi là mẫu số. Điều kiện bắt buộc là mẫu số phải khác 0. Phân số còn được hiểu là một dạng số được dùng để biểu thị tỉ lệ của một đại lượng này so sánh với một đại lượng khác.

#include<iostream>
using namespace std;
struct PhanSo{
    float m,n;//tu va mau so
};
PhanSo Nhap(){
    PhanSo phanso;
cin>>phanso.m;
cin>>phanso.n;
if (phanso.n < 0) {
        phanso.m = -phanso.m;
        phanso.n = -phanso.n;
    }
return phanso;
}
int SoSanh(PhanSo a, PhanSo b) {
    if ((a.m * b.n) > (a.n * b.m)) {
        return 1;
    } else if ((a.m * b.n) < (a.n * b.m)) {
        return -1;
    } else {
        return 0;
    }
}
void Nhap(PhanSo &phanso){
    cin>>phanso.m;
    cin>>phanso.n;
    if (phanso.n < 0) {
        phanso.m = -phanso.m;
        phanso.n = -phanso.n;
    }
}
