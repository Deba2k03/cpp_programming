//coding with Debashish
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,i,f=1,sum=0;
system("cls");
cout<<"Enter number of term";
cin>>n;
for(i=1;i<=n;i++)
{
    f=f*i;
    sum=sum+f;
}
cout<<"The sum of the factorial of the given numbe="<<sum<<endl;
getch();
return 0;
}