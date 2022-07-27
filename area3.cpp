//w.a.p to find area of cube,square,triangle......
//coding with Debashish
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    system("cls");
float r,s,c,t;
cout<<"enter radius of cube:"<<endl;

cin>>r;
c=3.141*r*r;
s=2*r*r;
t=r*r;
cout<<"area of triangle:"<<t<<endl;
cout<<"area of cube:"<<c<<endl;
cout<<"area of square:"<<s<<endl;
return 0;
}