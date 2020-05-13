#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("Enter value of a:");
scanf("%d",&a);
printf("Enter value of b:");
scanf("%d",&b);
printf("Before swapping a=%d b=%d",a,b);
c=a;
d=b;
a=d;
b=c;
printf("After swapping a=%d b=%d",a,b);
getch();
}
