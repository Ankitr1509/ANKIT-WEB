//Using Read() & Write() Commands.
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
long int rn;
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
while(1)
{
cout<<"Want to enter more records\n";
cin>>ch;
if(ch=='n'||ch=='N')
break;
a.setreg();
a.setname();
fill.write((char*)&a, sizeof(student));
}
fill.close();//Closes the open file
cout<<"\n Do you want to view the contents of a file (y/n)?";
cin>>ch;
if (ch=='y')
{
ifstream fill("student.dat");
fill.read((char*)&a, sizeof(student));
while(fill)
{
cout<<"\n Registration Number is "<<a.getreg();
cout<<"\n Student Name is "<<a.getname();
fill.read((char*)&a, sizeof(student));
}
}
getch();
}