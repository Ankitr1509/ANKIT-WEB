#include<iostream.h>
#include<conio.h>
class billing
{
long int ba[5][2];
public:
void accept()
{
int a;
for(a=1;a<=5;a++)
{
cout<<"Enter the Mobile Number:";
cin>>ba[a][0];
cout<<"Enter Billing Amount:";
cin>>ba[a][1];
}
}
void display()
{
int a;
for(a=1;a<=5;a++)
{
cout<<"\nThe Mobile Number:"<<ba[a][0]<<"\tThe Billing Amount:"<<ba[a][1];
}
}
};
int main()
{
billing d;
clrscr();
d.accept();
d.display();
getch();
}
