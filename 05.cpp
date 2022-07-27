//coding with Debashish
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int num;
system("cls");
cout<<"Enter the number for multiplication table:"<<endl;
cin>>num;
for( int a=1;a<=10;a++)
{
    cout<<num<<"*"<<a<<"="<<num*a<<endl;
}
return 0;
getch();
}