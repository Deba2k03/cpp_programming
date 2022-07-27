#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
int a,b,c;
//clrscr();
printf("             Before swapping        \n");
printf("             ---------------         \n ");
printf("             Enter a=");
scanf("%d",&a);
printf("              Enter b=");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("              \nAfter swapping          \n");
printf("                --------------           \n");
printf("                 a=%d\n",                 a);
printf("                 b=%d",b                   );
getch();   
return 0;
}