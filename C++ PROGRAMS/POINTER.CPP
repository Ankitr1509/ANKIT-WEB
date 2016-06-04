//lets do pointer
#include<iostream.h>
#include<conio.h>
void square(int,int);
void cube(int,int);
void main()
{
int x=2;
int y=3; clrscr();
void (*pFunc) (int,int); pFunc=square;
pFunc(x,y);
cout<<"x*x= "<<x<<endl;
cout<<"y*y= "<<y<<endl;

pFunc=cube;
cout<<"Before Cube call, x="<<x<<endl;
cout<<"Before Cube call, y="<<y<<endl;
pFunc(x,y);
cout<<"After Cube call,x*x*x="<<x<<endl;
cout<<"After Cube  call,y*y*y="<<y<<endl<<endl;
getch();}
void square(int rX,int rY)
{
rX*=rX;
rY*=rY;
}
void cube(int rX, int rY)
{
int temp;
temp=rX;
rX*=rX;
rX=rX*temp;

temp=rY;
rY*=rY;
rY=rY*temp;
}