// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class triangle
{private:
    int b,h;
    public:
    void input()
    {cout<<"enter base and height"<<endl;
        cin>>b>>h;
    }
    void output()
    {int a;
        a=(b*h)/2;
        cout<<"area of traingle="<<a;
    }
};
void main()
{ triangle area;
area.input();
area.output();
}