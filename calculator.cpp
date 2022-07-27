//coding with Debashish..........
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int a[100],i,s,sum=0;
  char b;
  system("cls");
  cout<<" ";
  cin>>s;
  for ( i = 0; i < 10; i++)
  {
      cout<<" ";
      cin>>b;
      switch (b)
      {
      case '+':
      cout<<" ";
      cin>>a[i];
      s=s+a[i];
      break;
      case '-':
      cout<<" ";
      cin>>a[i];
      s=s-a[i];
      break;
      case '*':
      cout<<" ";
      cin>>a[i];
      s=s*a[i];
      break;
      case '/':
      cout<<" ";
      cin>>a[i];
      s=s/a[i];
      break;
      case '=':
      cout<<s;
      break;
      default:
      cout<<"invalid input!!!";
          break;
      }
  }
return 0;
}