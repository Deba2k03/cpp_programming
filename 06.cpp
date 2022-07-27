//coding with Debashish
#include<iostream>
#include<conio.h>
using namespace std;
int swap(int ,int);
int main()
{
int a,b;
system("cls");
cout<<"Enter value of a and b:"<<endl;
cin>>a>>b;
swap(a,b);
return 0;
}
int swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"after swapping the value of a and b are="<<x<<"it"<<y<<endl;
    return (0);
}