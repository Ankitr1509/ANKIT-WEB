//Charactor Input/Output in Files Programming.
#include<fstream.h>
#include<string.h>
#include<conio.h>
int main()
{
ofstream fill("charfile.dat");   //object name is fill.
char str[]="You Better Check Yourself Before You Wreck Yourself.";
clrscr();
for(int i=0; i<=strlen(str);i++)   //string.h is used.
{
fill.put(str[i]);//put() is used to write the data.
}
fill.close();
ifstream fill1("charfile.dat");// object name is fill1.
char cstr[80];
int j=0;
while(fill1.get(cstr[j++])); //get() is used to read the data.
cout<<cstr;
getch();
return 0;
}
