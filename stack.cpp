//coding with Debashish
#include<iostream>
#include<conio.h>
using namespace std;
int stack[5],top=-1,item;
void push();
void pop();
void show();
int main()
{   
    system("cls");
    while(1)
    {
  int ch;
  cout<<endl<<"    manu     "<<endl;
  cout<<"--------------"<<endl;
  cout<<"1.push"<<endl;
  cout<<"2.pop"<<endl;
  cout<<"3.show"<<endl;
  cout<<"4.exit"<<endl;
  cout<<endl<<"Enter your choice:";
  cin>>ch;
  switch (ch)
  {
  case 1:push();
      break;
  case 2:pop();
  break;
  case 3:show();
  break;
  case 4:exit(0);
  break;
  default:
  cout<<"invalid choice!!!";
      break;
  }
 }
return 0;
}
void push()
{
   if(top==5-1)
   cout<<"stack is overflow"<<endl;
   else
   cout<<"push in stack"<<endl;
   cin>>item;
   top=top+1;
   stack[top]=item;
}
void pop()
{
    if(top==-1)
    cout<<"stack is underflow"<<endl;
    else
    cout<<"popped \t"<<stack[top];
    top--;
}
void show()
{
    int i;
    if(top==-1)
    cout<<"stack is empty";
    else
    for(i=top;i>=0;i--)
    {
        cout<<stack[i]<<"\t";
    }
}
