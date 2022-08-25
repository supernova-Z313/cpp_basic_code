#include<iostream>
#include<algorithm>

/* #include<bits/stdc++.h> */

using namespace std;

void hell(){
cout<<"hello"<<endl;
}

int pp(int a, int b){
return a+b;
}

int* alg(int a[], int b){
sort(a, a+b);
return a;
}


int ff(int a);

int main(){

hell();
int c = pp(5, 6);
int h = ff(8);

int k;
cin>>k;
int a[k];
for (int i=0;i<k;i++){
    cin>>a[i];
}

int *fa = alg(a, k);

for (int i=0;i<k;i++){
    cout<<fa[i]<<" ";
}
cout<<endl;

return 0;
}

int ff(int a){
return a++;
}
