//Multiple Inheritance Programming
#include<IOSTREAM.H>
#include<conio.h>
class a1
{
protected:
int i1;
public:
void show1()
{
cout<<"class a1 variable: "<<i1<<endl;
}
};
class a2
{
protected:
int i2;
public:
void show2()
{
cout<<"class a2 variable: "<<i2<<endl;
}
};
class derived:public a1,public a2
{
public:
void set(int a,int b)
{
i1=a;
i2=b;
}
};
int main()
{
derived c;
clrscr();
c.set(10,20);
c.show1();
c.show2();
getch();
return 0;
}