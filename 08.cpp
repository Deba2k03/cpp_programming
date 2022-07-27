//coding with Debashish
#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
int a,b;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
swap(&a,&b);
cout<<"After swap a is:"<<a<<endl;
cout<<"After swap b is:"<<b;
getch();
return 0;
}