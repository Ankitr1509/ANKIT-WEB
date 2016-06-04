#include<iostream.h>
#include<conio.h>
class base
{
public:
base()
{
cout<<"Constructor of base."<<endl; //First this statement will print.
}
~base()
{
cout<<"Destructor of base."<<endl;  // At last this statement will print.
}
};
class derived : public base
{
public:
derived()
{
cout<<"Constructor of derived."<<endl;//At second no. this statement will print.
}
~derived()
{
cout<<"Destructor of derived."<<endl; //At third no. this statement wil print.
}
};
int main()
{
derived a;// do not use clrscr(); as it will remove the destruction
	 // statements which will appear when program is finish.
getch();
return 0;
}
