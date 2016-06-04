//Virtual Function Programming
/*A function is declared virtual because its execution depends on the
context (contents of the base class pointer that are used to invoke it)
,which is not known at the time of compilation.
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class person
{
protected:
char name[50];
char dob[20];
char city[20];
char phoneNo[15];
public:
virtual void accept() //Virtual Function are invoked in child classes via
		      //there names and they are also virtual in nature.
{
cout<<"\nFirst Name: ";
gets(name);
cout<<"\nDate of Birth: ";
gets(dob);
cout<<"\nCity: ";
gets(city);
cout<<"\nPhone Number: ";
gets(phoneNo);
}
virtual void display()
{
cout<<"\nFirst Name: "<<name;
cout<<"\nDate of Birth: "<<dob;
cout<<"\nCity: "<<city;
cout<<"\nResidence Number: "<<phoneNo;
}
};
class customer:public person
{
private:
char ba[100];
float ao;
public:
void accept()
{
cout<<"\n\nEnter Customer's Details: ";
person::accept();
cout<<"\nCustomer's billing address: ";
gets(ba);
cout<<"\nAmount Dues: ";
cin>>ao;
}
void display()
{
cout<<"\n\nCustomer's Details: ";
person::display();
cout<<"\nBilling Address: "<<ba;
cout<<"\nOutstanding Amount: "<<ao;
}
};
class dealer:public person
{
private:
char sa[100];
int ns;
public:
void accept()
{
cout<<"\n\nEnter Dealer's Details: ";
person::accept();
cout<<"\nShop address: ";
gets(sa);
cout<<"\nNumber Sold: ";
cin>>ns;
}
void display()
{
cout<<"\n\nDealer's Details: ";
person::display();
cout<<"\nShop Address : "<<sa;
cout<<"\nNumber Sold : "<<ns;
}
};
int main()
{
person *ptr;
clrscr();
ptr =new customer;
ptr->accept();
ptr->display();
ptr =new dealer;
ptr->accept();
ptr->display();
getch();
return 0;
}