#include <iostream>
using namespace std;
class triangle
{private:
int a,b;
public:
void input();
void output();
};
void triangle::input()
{cout<<"enter base and height=\n";
cin>>a>>b;
}
void triangle:: output()
{int c;
c=(a*b)/2;
cout <<"area of triangle="<<c;
}
int main()
{triangle area;
area.input();
area.output();
return 0;
}