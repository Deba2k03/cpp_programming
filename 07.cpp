//coding with Debashish
#include<iostream>
#include<conio.h>
using namespace std;
int swap(int* ,int*);
int main()
{
int a,b;
system("cls");
cout<<"Enter two number to swap:"<<endl;
cin>>a>>b;
swap(&a,&b);
cout<<"after swapping the value of a="<<a<<"and"<<"b="<<b;
getch();
//return 0;
}
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return (0);
}