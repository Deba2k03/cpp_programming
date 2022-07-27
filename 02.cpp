//coding with Debashish
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,c=0,i=1;
system("cls");
cout<<"Enter a number:";
cin>>n;
while(n>=i)
{
    if(n%i==0)
    {
        c++;
    }
    i++;
}
if(c==2)
{
    cout<<"it is a prime numbber"<<endl;
}
else{
    cout<<"it is not a prime number"<<endl;
}
return 0;
getch();
}