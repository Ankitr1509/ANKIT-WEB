//This program contain Constructors & Destructors.
#include<iostream.h>
#include<conio.h>
class test
{
public:
test() //Constructor
{
cout<<"Constructors invoked"<<endl;
}
~test()  //Destructor
{
cout<<"Destructor invoked"<<endl;
}
};
test obj1;
int main()
{
//clrscr();
cout<<"Main() Begins"<<endl;
test obj2;
{
cout<<"Inner Block Begins"<<endl;
test obj3;
cout<<"Inner Block Ends"<<endl;
}
cout<<"Main() Ends"<<endl;
getch();
return 0;
}