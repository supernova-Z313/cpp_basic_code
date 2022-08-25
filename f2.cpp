#include<iostream>
using namespace std;

int main(){
int g;
while(7){
    g ++;
    if(g == 8){
        break;
    }
    cout<<"hello world"<<endl;

}

for(int i = 0; i < 5;i++){

    cout<<"look what u m"<<i<<endl;
}

int bb = 0;
for(;bb < 5;bb++){
    cout<<"hello there"<<endl;
}
cout<<bb<<endl;

int a[10];
a[3] = 5;
a[5] = 1.25;
for(int i = 0;i<10;i++){
    cout<<a[i]<<" ";
}
cout<<endl<<a[-8]<<endl;

float rr[10] = {1,2,3,4,3.6};
rr[6] = 7;
for(int i = 0;i<10;i++){
    cout<<rr[i]<<" ";
}

int largest = INT_MAX;
int lett = INT_MIN;
cout<<endl<<largest;

int e1 = 5;
int e2 = 8;
swap(e1, e2);
swap(e2, e2);
cout<<endl<<e2;
cout<<endl<<e1<<endl;
int arar[2] = {1, 2};
swap(arar[0], arar[1]);
cout<<arar<<endl;

/* MAX ARRAY SIZE = 10^5 */



return 0;
}
