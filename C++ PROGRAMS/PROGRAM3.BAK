//Operator Loading Program.
#include<iostream.h>
#include<conio.h>
	      /* comment start
	      ?: (ternary)
	      .  (member access)
	      .* (pointer to member)
	      :: (scope resolution)
	      sizeof (number of byte in operand)
	      Over Loading is not possible with these given operators.

	      && (The AND logical operator)
	      || (The OR logical operator)
	      ,  (The comma operator)
	      Over Loading is not recommended with these given operators.
	      comment finish */
	      /*To overload the'+' operator, the following syntax is used
	       to define the operator function
	       returnType className::operator +(parameters)
	       {
	       code
	       }
	       */
	       /* Simple Prefix Unary Operators
	       il.operator-()        (defined within class w/o argument)
	       operator-(il)         (defined outside of class with argument
				      of class type)
	       */
class ma
{
private:
int a,b;
public:
void operator-(); // member function
void accept(int,int);
void print();
};
void ma::operator-()
{
a=-a;
b=-b;
}
void ma::accept(int x,int y)
{
a=x;
b=y;
}
void ma::print()
{
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
}
int main()
{
ma c;
clrscr();
c.accept(15,-25);
c.print();
-c;
c.print();
getch();
return 0;
}