/*If we take 4 classes A,B,C & D, class D inherts attributes from two base
classes, class B & C and they inherts thier attributes from class A. As a
result,class D will have two copies of class A. The program is explained
below:*/
#include<iostream.h>
#include<conio.h>
class A
{
public:
int a;
};
class B:public A //A is base class of B
{
public:
int b;
};
class C:public A //A is base class of C
{
public:
int c;
};
class D:public B,public C //B,C is base class of D
{
int d;
};
int main()
{
D temp;
clrscr();
temp.B::a=10;
cout<<"\nDisplay: "<<temp.B::a;
temp.C::a=20;
cout<<"\nDisplay: "<<temp.C::a;
getch();
return 0;
}