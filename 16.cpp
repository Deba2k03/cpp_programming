#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
    static int x;
    static int y;
    public:
    static void print()
    {
        cout<<"value of x="<<x<<endl;
        cout<<"value of y="<<y<<endl;
    }
};
int demo::x=10;
int demo::y=20;
int main()
{
    demo ob;
    system("cls");
    cout<<"print through object name"<<endl;
    ob.print();
    cout<<"printrr throw class name:"<<endl;
    demo::print();
    getch();
}