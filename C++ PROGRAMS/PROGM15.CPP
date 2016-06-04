//Invocation of Constructors & Destructors Programming.
/*In case of multiple inheritance,the constructors are invoked in the
following order:
1.Virtual base class constructors-in the order of inheritance.
2.Non-Virtual base class constructors-in the order of inheritance.
3.Member objects' constructors-in the order of declaration.
4.Derived class constructors.
Destructors are invoked in the reverse order of the invocation of
constructors.*/
#include<iostream.h>
#include<conio.h>
class A
{
public:
A()
{
cout<<"Constructor Invoked in A\n";
}
~A()
{
cout<<"Destructor Invoked in A\n";
}
};
class B
{
public:
B()
{
cout<<"Constructor Invoked in B\n";
}
~B()
{
cout<<"Destructor Invoked in B\n";
}
};
class C:virtual public A
{
public:
C()
{
cout<<"Constructor Invoked in C\n";
}
~C()
{
cout<<"Destructor Invoked in C\n";
}
};
class D:virtual public A
{
public:
D()
{
cout<<"Constructor Invoked in D\n";
}
~D()
{
cout<<"Destructor Invoked in D\n";
}
};
class E
{
public:
E()
{
cout<<"Constructor Invoked in E\n";
}
~E()
{
cout<<"Destructor Invoked in E\n";
}
};
class F:public B,public C,public D
{
private:
E e;//member object of class E
public:
F()
{
cout<<"Constructor Invoked in F\n";
}
~F()
{
cout<<"Destructor Invoked in F\n";
}
};
int main()
{
F f;
cout<<"Program Over\n";
getch();
return 0;
}
