/*This program swaps the values in the variables using a function containing
  reference arguments. */
#include<iostream.h>
#include<conio.h>
void swap(int &,int &);
class fcall
{
int n1,n2;
public:
void accept();
};
void fcall::accept()
{
cout<<"Enter 2 numbers"<<endl;
cin>>n1>>n2;
swap(n1,n2);
cout<<n1<<" "<<n2<<endl;
}
void swap(int &a,int &b)
{
int t;
t=a;
a=b;
b=t;
cout<<a<<" "<<b<<endl;
}
int main()
{
fcall f1;
clrscr();
f1.accept();
getch();
return 0;
}