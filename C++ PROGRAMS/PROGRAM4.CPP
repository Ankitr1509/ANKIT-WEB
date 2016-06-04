/*Pre & Post Increment & Decrement Operators.*/
#include<iostream.h>
#include<conio.h>
class ma
{
private:
int n;
public:
ma();//constructor
ma(int);//constructor with parameter
/*the datatype of operators is the class name as they are defined under them*/
ma operator++();    //operator pre increment
ma operator++(int); //operator post increment
void display();
};
ma::ma()
{
n=0;
}
ma::ma(int n1)
{
n=n1;
}
ma ma::operator++() //pre increment
		   //here you can see datatype for operator is class name"ma"
{
ma temp;        //variable is define under ma data type
n=n+1;   //First increment number
temp.n=n; //then assign value to temp
return temp;
}
ma ma::operator++(int) //post increment
{
ma temp;
temp.n=n; //First assign the current value of n to temp
n=n+1;//Then increment the number
return temp; //Return the original value
}
void ma::display()
{
cout<<n<<endl;
}
int main()
{
ma a(100);
ma b;
clrscr();
b=a++;//post increment   //b will have the value 100 as it's post increment.
a.display();//display 101
b.display();//display 100
b=++a;//pre increment    //b will have the value 102 as it's pre increment.
a.display(); //display 102
b.display(); //display 102
getch();
return 0;
}