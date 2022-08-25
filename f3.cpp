#include<iostream>
using namespace std;

int y = 12;  // global
int d = 7;
int main(){

/*
int jj = 10;
int jj = 11;
error dont get 2 vari in 1 scope  */

int x = 10;
for(int i=0;i<5;i++){
    int x = i;
    cout<<x<<endl;
    }
cout<<x<<endl;
/* 2 var in 2 different scope {} */

int y = 10;   // local

::y++;
cout<<y<<"   "<<::y<<endl;

d = 5;
cout<<d<<"  "<<::d<<endl;
int d = 111;
d--;
cout<<d<<"  "<<::d<<"  "<<d<<endl;

int t = 10;
int r = t;
r++;
int &tt = t;
tt = tt + 2;
cout<<t<<"  "<<r<<"  "<<tt<<endl;

return 0;
}
