//Ambiguities in Multiple Inheritance
//This problem occur when two or more classes have functions with same name.
//Below example will help you in understand the ambiguities in
//Multiple Inheritance using scope resolution ::
#include<iostream.h>
#include<conio.h>
class a1
{
public:
void disp()
{
cout<<"A ";
}
};
class a2
{
public:
void disp()
{
cout<<"B ";
}
};
class derived:public a1,public a2
{
};
int main()
{
derived a;
clrscr();
a.a1::disp();//invokes disp() of class a1
a.a2::disp();//invokes disp() of class a2
getch();
return 0;
}

