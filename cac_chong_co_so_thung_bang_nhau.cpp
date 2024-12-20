


#include<bits/stdc++.h>
using namespace std;
int main(){
int h,w;
cin>>h;//so dong
cin>>w;//so cot
int a[h][w];
for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
        cin>>a[i][j];
    }
}
int temp=a[0][0];
for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
        if(temp>a[i][j]){
            temp=a[i][j];
        }
    }
}
int cnt=0;
for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
    if(a[i][j]>temp){
        cnt+=a[i][j]-temp;
    }
}
    }
    cout<<cnt;
    return 0;
}
