//Ambiguity in Multiple Inheritance can be solved by using an overridden
//member function.
#include<iostream.h>
#include<conio.h>
class a1
{
public:
void disp()
{
cout<<"Joker";
}
};
class a2
{
public:
void disp()
{
cout<<"\nBatman";
}
};
class derived:public a1,public a2
{
public:
void disp(void) //Using Overridden member function
{
a1::disp();
a2::disp();
cout<<"\nBatman killed Joker";
}
};
int main()
{
derived a;
clrscr();
a.disp();
/*Not ambiguous because thye disp() fuction in the derived class overrides
the base class members.*/
getch();
return 0;
}