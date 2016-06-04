//Enumeration Program.
#include<iostream.h>
#include<conio.h>
enum Days{sun=1,mon,tues,wed,thur,fri,sat};
void main()
{
enum Days today=sun;
clrscr();
switch(today)
{
case 1: cout<<"It's sunday"<<endl;
break;
default: cout<<"Not Monday"<<endl;
}
cout<<"value of today is "<<today;
getch();
}