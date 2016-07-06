#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a=1,s;
clrscr();
printf("Enter the number");
scanf("%d",&n);
a=n;
while(n!=0)
{
s=n%10;
n=n/10;
a=a*s;
}
printf("%d",a);
getch();
}
