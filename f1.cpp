#include<iostream>
#include<string>
using namespace std;

int main(){

cout<<"fuck"<<endl;
cout<<"lalala";


int o= 1000;
int p = 13;
o = 15;
int k = o+p;
cout<<k<<endl;

char cx = 'A';
cout<<cx+5<<endl<<cx * 2<<endl<<cx + 'B';
cx = cx + 5;
cout<<cx<<endl;

p = (int)cx + 5;
char x = (char)p;

cout<<x<<endl;




 int ll;
 cin>>ll;
 cout<<ll<<endl;

int js = sizeof(int);
cout<<js<<endl;

short int kh = 2;
cout<<sizeof(kh)<<endl;
int kj = 1000000000;
cout<<kj<<endl;
cout<<sizeof(kj)<<endl;
cout<<sizeof(long long int)<<endl;
cout<<"fuuuuuuuuuuuuuuuckkk"<<sizeof(long long int)<<endl;

float fd = 1.23;
double gh= 1.2547896;


char sfff = 'a';
cout<<sfff<<endl<<sizeof(sfff)<<endl;


cout<<9/5<<endl;
cout<<9.0/5<<endl;

int ha = (10==10);
bool hs = (10!=10);
bool hd = !(10<=15);
bool hh = (10!=10) && (10==10); // and
bool hg = (10!=10) || (10==10); // or

cout<<ha<<endl<<hs<<endl<<hd<<endl<<hh<<endl<<hg<<endl;

cout<<(5^6)<<endl<<(1<<2)<<endl<<(1>>2)<<endl<<(6&3)<<endl<<(4|4)<<endl<<(~511)<<endl;


int dd = 1;
int xxx = dd++; //post increment first post second calculate
cout<<xxx<<endl<<dd<<endl;

int ee = ++xxx; // pre increment
cout<<ee<<endl<<xxx<<endl;


if (ee > 2){

    cout<<"hello"<<endl;
}
else if(ee==2){
    cout<<"fucking"<<endl;
}
else{

    cout<<"world"<<endl;

}
int aq = 1;
if (6%2 && aq){
    cout<<"ddd"<<endl;
}

aq%2==0 ? cout<<"even"<<endl : cout<<"odd"<<endl;


char vz;
cin>>vz;

switch (vz){
case 'F':
case 'f': cout<<"fuck"<<endl;
break;

case 'm': cout<<"me"<<endl;
            break;

default : cout<<"you"<<endl;
}


while (aq <= 5 ){

    cout<<"fuck cpp"<<endl;
    aq++;
}

int nbv = INT_MAX;
cout<<nbv<<endl;


/* this is
note
*/
    return 0;
}
