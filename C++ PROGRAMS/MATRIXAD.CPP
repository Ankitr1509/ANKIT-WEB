//array as parameter
#include<iostream.h>
#include<conio.h>
#include<string.h>
class matadd
{
public:
void ma(int a[3][3],int b[3][3])
{
int c[3][3];
cout<<"Enter Matrix 1:\n";
for(int x=0;x<=2;x++)
{
for(int y=0;y<=2;y++)
{
cin>>a[x][y];
}
}
cout<<"Enter Matrix 2:\n";
for(x=0;x<=2;x++)
{
for(int y=0;y<=2;y++)
{
cin>>b[x][y];
}
}
cout<<"Addition of 2 Matrixs is(As per question):\n";
for(x=0;x<=2;x++)
{
for(int y=0;y<=2;y++)
{
c[x][y]=a[x][y]+b[x][y];
cout<<c[x][y]<<"\t";
}
cout<<endl;
}
}
};
void main()
{
matadd object;
int a[3][3],b[3][3];

object.ma(a,b);
getch();
}
