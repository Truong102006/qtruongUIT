//Tìm số tiền cổ phiếu tối thiểu X để số cổ đông bán cổ phiếu với mức giá X luôn lớn hơn hoặc bằng số nhà đầu tư mua cổ phiếu với mức giá X.

#include<bits/stdc++.h>
using namespace std;
int cnt1(int k, int dem1, int n, int a[100]);
int cnt2(int k, int b[100],int dem2, int m);
int main(){
int n;//so co dong lt
int m;//so nha dau tu lt
cin>>n>>m;
int a[n];
int b[m];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<m;i++){
    cin>>b[i];
}
int x;//so co dong tte
int y;//so nha dau tu tte
sort(a,a+n);
for(int i=0;i<n;i++){
        int dem1=0;
        int dem2=0;
        int k=a[i];
    int x1=cnt1(k,dem1,n,a);
    int x2=cnt2(k,b,dem2,m);
    if(x1>=x2){
        cout<<a[i];
        break;
    }
}
return 0;
}
int cnt1(int k, int dem1, int n, int a[100]){
    for(int i=0;i<n;i++){
        if(k>=a[i]){
            dem1++;
        }
    }
    return dem1;
}
int cnt2(int k, int b[100], int dem2, int m){
    for(int i=0;i<m;i++){
        if(k<=b[i]){
            dem2++;
        }
    }
    return dem2;
}
