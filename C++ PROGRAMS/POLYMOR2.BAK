//Constructor Overloading
//Program to illustrate the applicationof calculator class
#include<iostream.h>
#include<conio.h>
class calculator
{
private:
int n1,n2,t;
public:
calculator();
calculator(int,int); //constructor
void input(int,int);
void add();
void disp();
};
calculator::calculator()
{
n1=n2=t=0;
}
calculator::calculator(int a,int b) //constructor
{
n1=a;
n2=b;
t=0;
}
void calculator::input(int a,int b)
{
n1=a;
n2=b;
}
void calculator::add()
{
t=n1+n2;
}
void calculator::disp()
{
cout<<"Sum of two number is : "<<t<<endl;
}
int main()
{
calculator c1;
calculator c2(4,3);
calculator *cptr;
cptr=new calculator(5,10);
clrscr();
c2.add();
c2.disp();
cptr->add();
cptr->disp();
delete cptr;
getch();
return 0;
}
