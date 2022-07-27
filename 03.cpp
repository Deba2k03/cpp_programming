//coding with Debashish
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 cout<<"....programto find gcd and lcm of two number"<<endl;
 int n1,n2,i;
 int gcd=1,lcm=1;
 cout<<"Enter the two number you want to find Gcd and lcm of:\n";
 cin>>n1>>n2;
 for(i=1;i<1000;i++)
 {
     if((n1%i==0)&&(n2%i==0))
     {
         gcd=i;
     }
 }
 lcm=(n1+n2)/gcd;
 cout<<"the gcd of the two number is"<<n1<<"and"<<n2;
 cout<<endl<<"The lcm of the two number is"<<n1<<"and"<<n2;
 getch();
return 0;
}