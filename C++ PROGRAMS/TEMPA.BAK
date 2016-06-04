#include<iostream.h>
#include<conio.h>
class convert
{
float a,b;
public:
void fun1();
void fun2();
void fun3();
void fun4();
convert(); /* It is a constructor which is use to intialize the member
	      variables in the class */
};
convert::convert()   /* :: is used to define func outside the class
			& it is known as Scope resolution operator */
{
a=1;
}
void convert::fun1()
{
cout<<"\nEnter the value to be converted into Metre\n";
cin>>a;
b=a/100;
cout<<a<<"Centimetre = "<<b<<"Metre";
}
void convert::fun2()
{
cout<<"\nEnter the value to be converted into Kilometre\n";
cin>>a;
b=a/1000;
cout<<a<<"Metre = "<<b<<"Kilometre";
}
void convert::fun3()
{
cout<<"\nEnter the value to be converted into Centimetre\n";
cin>>a;
b=a*2.5;
cout<<a<<"Inch = "<<b<<"Centimetre";
}
void convert::fun4()
{
cout<<"\nEnter the value to be converted into Fahrenhit\n";
cin>>a;
b=(a*1.8)+32;
cout<<a<<"Celcious = "<<b<<"Fahrenhit";
}
void main()
{
clrscr();
convert obj1;
int choice;
start:
cout<<"\n\nEnter your choice";
cout<<"\n1 for Centimetre to Metre.";
cout<<"\n2 for Kilometre to Metre.";
cout<<"\n3 for Inch to Centimetre.";
cout<<"\n4 for Celcious to Fahrenhit.";
cout<<"\n5 for Exit.\n";
cin>>choice;
switch (choice)
{
case 1:
obj1.fun1();
break;
case 2:
obj1.fun2();
break;
case 3:
obj1.fun3();
break;
case 4:
obj1.fun4();
break;
case 5:
goto finish; //It will move the execution to finish: line
break;
}
goto start;  //It will move the execution to start: line
finish:
getch();
}