#include<iostream.h>
#include<conio.h>
#include<string.h>
class marks
{
char* s[10];
int m[6];
public:
void accept()
{
int a,b;
for(a=1;a<=10;a++)
{
cout<<"\n\nEnter the name of student ";
cin>>s[a];
for(b=1;b<=6;b++)
{
cout<<"\nEnter the marks of subject:"<<b<<" ";
cin>>m[b];
}
}
}
void display()
{
int a,b;
for(a=1;a<=10;a++)
{
cout<<"\n\nThe name of student "<<s[a];
for(b=1;b<=6;b++)
{
cout<<"\nThe marks of subject:"<<b<<"is"<<m[b];
}
}
}
};
int main()
{
marks x;
clrscr();
x.accept();
x.display();
getch();
}