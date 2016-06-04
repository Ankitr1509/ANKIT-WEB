//Question on function call by value.
#include<iostream.h>
#include<conio.h>
void square(int);
class fcall
{
int n1;
public:
fcall();
};
fcall::fcall()
{
n1=10;
cout<<"Constructor is invoked";
square(n1);
}
void square(int a)
{
cout<<"\n"<<a<<endl;
a*=a;
cout<<a<<endl;
}
int main()
{
fcall f1;
//clrscr();
getch();
return 0;
}