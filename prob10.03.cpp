#prob10.03: Phân số là sự biểu diễn số hữu tỉ dưới dạng tỉ lệ của hai số nguyên, trong đó số ở trên được gọi là tử số, còn số ở dưới được gọi là mẫu số. Điều kiện bắt buộc là mẫu số phải khác 0. Phân số còn được hiểu là một dạng số được dùng để biểu thị tỉ lệ của một đại lượng này so sánh với một đại lượng khác.
Dùng cấu trúc struct để biểu diễn phân số. Viết hàm cộng hai phân số.

#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
    int tu,mau;
};
int UCLN(int a, int b){
    while(b != 0){
       int x=b;
        b=a%b;
        a=x;
    }
    return abs(a);
}
void rutgon(PhanSo &pso){
int x=UCLN(pso.tu, pso.mau);
pso.tu/=x;
pso.mau/=x;
if(pso.mau<0){
    pso.tu=-pso.tu;
    pso.mau=-pso.mau;
}
}
PhanSo Nhap(){
PhanSo ps;
cin>>ps.tu>>ps.mau;
return ps;
}
void Nhap(PhanSo &ps){
cin>>ps.tu>>ps.mau;
}
void Xuat(PhanSo ps){
rutgon(ps);
if(ps.mau==1){
    cout<<ps.tu<<endl;
}
else{
    cout<<ps.tu<<"/"<<ps.mau<<endl;
}
}
PhanSo Cong(PhanSo a, PhanSo b){
    PhanSo res;
    res.tu=a.tu*b.mau+b.tu*a.mau;
    res.mau=a.mau*b.mau;
    rutgon(res);
    return res;
}
