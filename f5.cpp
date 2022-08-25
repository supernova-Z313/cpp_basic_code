#include<iostream>
using namespace std;

int  main(){

int i = 10;
cout<<&i<<endl;

int * p = &i;
cout<<p<<endl;

cout<<sizeof(p)<<endl<<sizeof(i)<<endl;

cout<<*p<<endl;

*p = 13;
cout<<i<<endl;

int j;
cout<<j<<endl;

int *o = NULL;
*o = 50;

int jg[5] = {1, 2 ,3, 4, 5};
cout<<max(j, j+5);
return 0;
}
