#prob10.10: Đinh nghĩa da thức một biến f(x) có dạng S= ... viết chương trình cộng hai đa thức A và B



#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
#define MAXN 100

struct DONTHUC{;
    float HeSo;
    int SoMu;
};
struct DATHUC{;
    int n;
    DONTHUC dt[100];
};
DATHUC* Nhap(){
    DATHUC *a= new DATHUC;
    cin >> a->n;
    for (int i=0; i< a->n ; i++)
        cin>> a->dt[i].HeSo >> a->dt[i].SoMu;
    return a;

}
void Xuat (DATHUC &a){
    int kt=0;
        for (int i=0 ; i<a.n ; i++){
        if (a.dt[i].HeSo==0) continue;
        if (a.dt[i].SoMu==0)
    {   if (a.dt[i].HeSo>0&&kt==1) cout <<"+"<<a.dt[i].HeSo;
        else cout <<a.dt[i].HeSo;
        kt=1;
        continue;
    }

         if (a.dt[i].SoMu==1)
            {if (a.dt[i].HeSo>0&&kt==1&&a.dt[i].HeSo!=1) cout <<"+"<<a.dt[i].HeSo<<"x";
            else if (a.dt[i].HeSo==1&&kt==1) cout <<"+x";
            else if  (kt==0&&a.dt[i].HeSo==1) cout<<"x";
            else if  (a.dt[i].HeSo==-1) cout<<"-x";
             else   cout <<a.dt[i].HeSo<<"x";
            kt=1;
            continue;}
    if (abs(a.dt[i].HeSo)==1){
        if (a.dt[i].HeSo==1&&kt==1)
        {cout <<"+x^"<<a.dt[i].SoMu;
        kt=1;}
        else if (a.dt[i].HeSo==-1)
            {cout<<"-x^"<<a.dt[i].SoMu;
        kt=1;}
        else {
            cout<<"x^"<<a.dt[i].SoMu;
        kt=1;
        }
        continue;
    }

    if (a.dt[i].HeSo>0)
    {   if (kt==0) cout <<a.dt[i].HeSo<<"x^"<<a.dt[i].SoMu;
    else cout <<"+"<<a.dt[i].HeSo<<"x^"<<a.dt[i].SoMu;
    kt=1;
    continue;
   }
   if (a.dt[i].HeSo<0)
    {cout <<a.dt[i].HeSo<<"x^"<<a.dt[i].SoMu;
    kt=1;
    continue;
   }
   }
if (kt==0) cout <<"0";
}
void Xuat (DATHUC *a){
    int kt=0;
        for (int i=0 ; i<a->n ; i++){
        if (a->dt[i].HeSo==0) continue;
        if (a->dt[i].SoMu==0)
    {   if (a->dt[i].HeSo>0&&kt==1) cout <<"+"<<a->dt[i].HeSo;
        else cout <<a->dt[i].HeSo;
        kt=1;
        continue;
    }

      if (a->dt[i].SoMu==1)
            {if (a->dt[i].HeSo>0&&kt==1&&a->dt[i].HeSo!=1) cout <<"+"<<a->dt[i].HeSo<<"x";
            else if (a->dt[i].HeSo==1&&kt==1) cout <<"+x";
            else if  (kt==0&&a->dt[i].HeSo==1) cout<<"x";
            else if  (a->dt[i].HeSo==-1) cout<<"-x";
             else   cout <<a->dt[i].HeSo<<"x";
            kt=1;
            continue;}

    if (abs(a->dt[i].HeSo)==1){
        if (a->dt[i].HeSo==1&&kt==1)
        {cout <<"+x^"<<a->dt[i].SoMu;
        kt=1;}
        else if (a->dt[i].HeSo==-1)
            {cout<<"-x^"<<a->dt[i].SoMu;
        kt=1;}
        else {
            cout<<"x^"<<a->dt[i].SoMu;
        kt=1;
        }
        continue;
    }

    if (a->dt[i].HeSo>0)
    {   if (kt==0) cout <<a->dt[i].HeSo<<"x^"<<a->dt[i].SoMu;
    else cout <<"+"<<a->dt[i].HeSo<<"x^"<<a->dt[i].SoMu;
    kt=1;
    continue;
   }
   if (a->dt[i].HeSo<0)
    {cout <<a->dt[i].HeSo<<"x^"<<a->dt[i].SoMu;
    kt=1;
    continue;
   }
   }
if (kt==0) cout <<"0";
}
DATHUC* Tong2DaThuc(DATHUC *a , DATHUC *b){
    DATHUC *c= new DATHUC;
int tam=0, j=0 , i=0;
    while (j<b->n&&i<a->n){
        if (a->dt[i].SoMu==b->dt[j].SoMu)
        {
            c->dt[tam].SoMu=a->dt[i].SoMu;
            c->dt[tam].HeSo=a->dt[i].HeSo + b->dt[j].HeSo;
            j++;
            i++;
        }
        else if (a->dt[i].SoMu<b->dt[j].SoMu)
        {
            c->dt[tam]=b->dt[j];
            j++;
        }
        else if (a->dt[i].SoMu>b->dt[j].SoMu)
        {
            c->dt[tam]=a->dt[i];
            i++;

        }
        tam++;
    }
    while (i < a->n)
    {
        c->dt[tam]=a->dt[i];
        i++;
        tam++;
    }
    while (j < b->n)
    {
        c->dt[tam]=b->dt[j];
        j++;
        tam++;
    }

  c->n=tam;
  return c;

}
