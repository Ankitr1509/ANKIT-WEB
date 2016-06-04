//Implementing Call by Reference Using Pointers.
#include<iostream.h>
#include<conio.h>
void swap(int *,int *);
int main()
{
int n1,n2;
clrscr();
cout<<"Enter 2 no.";
cin>>n1>>n2;
swap(&n1,&n2);
cout<<n1<<" "<<n2<<endl;
getch();
return 0;
}
void swap(int *p1, int *p2)
{
int temp;
temp=*p1;
*p1=*p2;
*p2=temp;
cout<<*p1<<" "<<*p2<<endl;
return;
}