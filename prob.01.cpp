#prob.01: Trong toán học, Phân số là sự biểu diễn số hữu tỉ dưới dạng tỉ lệ của hai số nguyên, trong đó số ở trên được gọi là tử số, còn số ở dưới được gọi là mẫu số. Điều kiện bắt buộc là mẫu số phải khác 0. Phân số còn được hiểu là một dạng số được dùng để biểu thị tỉ lệ của một đại lượng này so sánh với một đại lượng khác.
Dùng cấu trúc để biểu diễn kiểu phân số. Sau đó viết hàm nhập mảng một chiều gồm n (0 < n ≤ 100) các phân số và xuất mảng phân số (đã tối giản) ra màn hình.


#include<iostream>
using namespace std;
#define MAXN 100
struct PhanSo{
    int tu,mau;
};
int UCLN(int a, int b){
    while(b!=0){
        int x=b;
        b=a%b;
        a=x;
    }
    return abs(a);
}
void rutgon(PhanSo &pso){
int x=UCLN(pso.tu,pso.mau);
pso.tu/=x;
pso.mau/=x;
if(pso.mau<0){
    pso.tu=-pso.tu;
    pso.mau=-pso.mau;
}
}
void Nhap(PhanSo a[], int &n){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].tu>>a[i].mau;
    }
}
void Xuat(PhanSo a[], int n){
    for(int i=0;i<n;i++){
        if(a[i].mau==0){
            cout<<"Khong thoa yeu cau bai toan"<<endl;
        }
        else{
            rutgon(a[i]);
            if(a[i].mau==1){
                cout<<a[i].tu<<endl;
            }
            else{
                cout<<a[i].tu<<"/"<<a[i].mau<<endl;
            }
        }
    }
}
