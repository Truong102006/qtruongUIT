#include<bits/stdc++.h>
using namespace std;
bool check(int k, int dem, int a[100]);
int main(){
  int n;//so lg mon qua
  cin>>n;
  int a[100];
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  int cnt=0;
  for(int i=n;i>=1;i--){
    int k=a[i];
    int dem=i;
    if(check(k,dem,a)==true){
        cnt++;
    }
  }
  cout<<cnt;
  return 0;
}
bool check(int k, int dem, int a[100]){
    int x=k;
    int y=0;
    int z=0;
    for(int i=dem;i>=1;i--){
        if(a[i] !=x){
                if(y != 0){
                    goto if2;
                }
            y=a[i];
        }
    if2:
            if((a[i] != x)&&(a[i] != y )){
            z=a[i];
        }
    }
    if((y != 0)&&(z != 0 ))
    return true;
    return false;
}
