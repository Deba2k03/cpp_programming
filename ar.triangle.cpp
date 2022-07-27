#include<iostream>
#include<conio.h>
using namespace std;
class area
{
    private:
    int a,b;
    public:
    void input();
    void output();
};
    void area:: input()
    {
        cout<<"Enter base and height of Triangle:"<<endl;
        cin>>a>>b;
    }
   void area::void output()
    {
        int ar;
        ar=0.5*a*b;
        cout<<"Area of Triangle="<<ar;
    }
void main()
{
    area triangle;
    system("cls");
    triangle.input();
    triangle.output();
    getch();
}