#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,n;
 cout<<"enter the range";
 cin>>n;
 cout<<"\n odd numbers are \n";

 for(i=0;i<=n;i++)
 {
 if(i%2==0)
 {
 cout<<" "<<i;
 }
 }

 getch();
 }