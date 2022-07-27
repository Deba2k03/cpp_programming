#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    system("cls");
    cout<<"Enter three number:"<<endl;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<"is greater";
        }
        else{
            cout<<c<<"is greater";
        }
    }
    else
    {
        if(b>c)
        {
            cout<<b<<"is greater";
        }
        else
        {
            cout<<c<<"is greater ";
        }
    }
    getch();
}