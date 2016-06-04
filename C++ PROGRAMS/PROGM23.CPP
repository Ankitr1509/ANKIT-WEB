//Railway (Kindof)
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
class rail
{
protected:
char p[8];
public:
void accept()
{
cout<<"\nEnter Passenger Mobile No: ";
cin>>p[0];
cout<<"\nEnter Passenger Name: ";
cin>>p[1];
cout<<"\nEnter Passenger Date of Birth: ";
cin>>p[2];
cout<<"\nEnter Passenger Sex: ";
cin>>p[3];
cout<<"\nEnter Passenger Train Name: ";
cin>>p[4];
cout<<"\nEnter Passenger Train Number: ";
cin>>p[5];
cout<<"\nEnter Passenger Train Choach Number: ";
cin>>p[6];
cout<<"\nEnter Passenger Train Berth Number: ";
cin>>p[7];
}
void display()
{
cout<<"\nPassenger Mobile No: "<<p[0];
cout<<"\nPassenger Name: "<<p[1];
cout<<"\nPassenger Date of Birth: "<<p[2];
cout<<"\nPassenger Sex: "<<p[3];
cout<<"\nPassenger Train Name: "<<p[4];
cout<<"\nPassenger Train Number: "<<p[5];
cout<<"\nPassenger Train Choach Number: "<<p[6];
cout<<"\nPassenger Train Berth Number: "<<p[7];
}
};
void main()
{
int ch,pos,mob;
rail r;
cout<<"::::::::::::::::::::::::::::::::::Railway Enquiry:::::::::::::::::::::::::::::::\n";
cout<<"Enter your choice:(1-5) \n";
cout<<"1.Accept Customer Details.\n"<<"2.Save Customer Details in File.\n";
cout<<"3.Display Details of Existing Customers.\n";
cout<<"4.Display Details of Particular Customer(Based on the Customer's Mobile Number).\n";
cout<<"5.Quit the Application.\n";
cin>>ch;
switch(ch)
{
case 1:
{
ofstream fill("passenger.dat");
r.accept();
fill.write((char*)&r,sizeof(rail));
break;
}
case 2:
{
ifstream fill("passenger.dat");
pos=fill.tellg();//Reads total no. of characters in file.
if(pos>0)
{
cout<<"Passenger Details Saved";
}
else if(pos==0)
{
cout<<"\nPassenger details not available. Please enter passenger details";
ofstream fill("passenger.dat");
r.accept();
fill.write((char*)&r,sizeof(rail));
cout<<"Passenger Details Saved.";
}
break;
}
case 3:
{
ifstream fill("passenger.dat");
pos=fill.tellg();//Reads total no. of characters in file.
if(pos>0)
{
ifstream fill("passenger.dat");
fill.read((char*)&r,sizeof(rail));
while(fill)
{
r.display();
fill.read((char*)&r,sizeof(rail));
}
}
else if(pos==0)
{
cout<<"\nNo Passenger Details available.Enter Passenger Details from Main Menu.";
}
break;
}
case 4:
{
ifstream fill("passenger.dat");
pos=fill.tellg();//Reads total no. of characters in file.
if(pos==0)
{
cout<<"\nNo Passenger Detail Available.Enter Passenger Detail from Main Menu.";
}
else if(pos>0)
{
cout<<"Enter Passenger Mobile Number";
cin>>mob;
fill.seekg(0,ios::beg);//Seeks to start of file.
}
break;
}
case 5:
{
break;
}
default:
break;
}
getch();
}














