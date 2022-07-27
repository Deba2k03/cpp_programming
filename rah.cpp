#include <iostream>
using namespace std;
class triangle
{public:
void output(int x,int y)
{int a;
a=(x*y)/2;
cout<<"area of triangle="<<a;
}

};
int main()
{int b,h;
triangle area;
cout<<"enter base and height=\n";
cin>>b>>h;
area.output(b,h);
return 0;

}