//File Input & Output Using Objects.
/*Consider the user-defined class student whose data ha to be saved into the
file student.dat and read when requested by the user.*/
#include<fstream.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class student
{
private:
int rn;
char n[20];
public:
void setreg()
{
cout<<"\nEnter the Registration Number: ";
cin>>rn;
}
void setname()
{
cout<<"\nEnter Student Name: ";
gets(n);
}
int getreg()
{
return rn;
}
char *getname()
{
return n;
}
};
void main()
{
ofstream fill("student.dat");
char ch;
student a;
clrscr();
a.setreg();
a.setname();
fill<<a.getreg()<<" "<<a.getname();
fill.close();//Closes the open file
cout<<"\n Do you want to view the contents of a file (y/n)?";
cin>>ch;
if (ch=='y')
{
ifstream fill("student.dat");
int rn1;
char n1[20];
fill>>rn1>>n1;
cout<<"\n Registration Number is "<<rn1;
cout<<"\n Student Name is "<<n1;
getch();
}
}