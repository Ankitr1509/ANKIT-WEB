//Philips Anderson of Mega Technologies Area Drawing Questions.
#include<iostream.h>
#include<conio.h>
class shape
{
protected:
long float l,b,r,a,i;
public:
shape()       //Constructor.
{
l=0;
b=0;
r=0;
}
shape(int x,int y,int z)   //Constructor with parameter.
{
l=x;
b=y;
r=z;
}
void accept()       //"if","else if" is there to differenciate b/w R & C
{
if(i==1)
{
cout<<"\nEnter Length: ";
cin>>l;
cout<<"\nEnter breadth: ";
cin>>b;
}
else if(i==0)
{
cout<<"\nEnter Radius: ";
cin>>r;
}
}
void display()
{
if(i==1)
{
cout<<"\nLength: "<<l;
cout<<"\nBreadth: "<<b;
}
else if(i==0)
{
cout<<"\nRadius: "<<r;
}
}
void draw()
{
if(i==1)
{
cout<<"\nDraw Rectangle";
}
else if(i==0)
{
cout<<"\nDraw Circle";
}
}
void calc()
{
if(i==1)
{
a=l*b;
cout<<"\nArea of Rectangle : "<<a;
}
else if(i==0)
{
a=3.14*r*r;
cout<<"\nArea of Circle : "<<a;
}
}
};
class rectangle:public shape
{
public:
rectangle()
{
i=1;
}
};
class circle: public shape
{
public:
circle()
{
i=0;
}
};
int main()
{
shape *shape;
char ch;
clrscr();
cout<<"\nWhat you want to draw: ";
cout<<"\nR for Rectangle ";
cout<<"\nC for Circle ";
cin>>ch;
switch(ch)
{
case 'R':
case 'r': shape=new rectangle();
	  break;
case 'C':
case 'c': shape=new circle();
	  break;
}
shape->accept();  //In case of pointer the syntax of calling a function
shape->display(); // is "pointer->function();"
shape->calc();
shape->draw();
getch();
return 0;
}