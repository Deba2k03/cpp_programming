#include <iostream>
using namespace std;
int p,m,n,x,y,z;
class area
{
private:
    int a, b, c;

public:
      area(int p)
      {
    a = p * p;
    cout << "area of square=" << a << endl;
}
    area(int m, int n)
{
    b = m * n;
    cout << "area of rectangle=" << b<<endl;
}
     area(int x, int y, float z)
     {
    c = x * y * 0.5;
    cout << "area of triangle=" << c << endl;
}
};


int main()
{  
    system("cls");
     int a,l,b,h,t;
    cout<<"enter side of square:";
    cin>>a;
    area A(int a);
    cout<<"enter length and breath:\n ";
    cin>>l>>b;
    area C(int l,int b);
    cout<<"enter height and breth of triangle:\n";
    cin>>h>>t;
    area B(int h,int t);
    return 0;
}