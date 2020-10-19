#include<iostream>
#include<conio.h>
void main()
{
clrscr();
int i,j,n;

cout<<"Enter the value of n";

cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<i;
}
cout<<"\n";
}getch();
}