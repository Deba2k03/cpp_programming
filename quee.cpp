//coding with Debashish
#include<iostream>
using namespace std;
void front();
void rear();
void display();
int quee[5],f=-1,r=-1,item;
int main()
{   
    while(1)
    {
   // system("cls");
  int ch;
  cout<<endl<<"1.Insert"<<endl;
  cout<<"2.Delete"<<endl;
  cout<<"3.Display"<<endl;
  cout<<"4.Exit"<<endl;
    cout<<endl<<"Enter your choice:";
    cin>>ch;
    switch(ch)
    {
    case 1:front();
    break;
    case 2:rear();
    break;
    case 3:display();
    break;
    case 4:exit(0);
    default:
    cout<<"invalid choice";
    }
    }
    return 0;
}
void front()
{
    if(f==-1)
     f=0;
     else
      if (r==5-1)
      {
          cout<<"Quee is full";
      }
      else
      {
          cout<<"insert element:";
          cin>>item;
          r++;
          quee[r]=item;
      }
}
void rear()
{
    if(f==-1)
    cout<<"quee is underflow";
    else
    cout<<"delete in quee"<<quee[f];
    f++;
}
void display()
{   
    int i;
    if(r==-1)
    cout<<"quee is empty";
    else
    for(i=f;i>=0;i--)
    {
        cout<<quee[i];
    }
}