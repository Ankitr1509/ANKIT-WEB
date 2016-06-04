 /*Consider the program given below that will find the number of records
 in the students.dat by using the seekg() & tellg() functions. */
 #include<fstream.h>
 #include<conio.h>
 class student
 {
 private:
 int rn;
 char n[20];
 public:
 void setreg()
 {
 cout<<"\nEnter the registration Number: ";
 cin>>rn;
 }
 void setname()
 {
 cout<<"\nEnter your name: ";
 cin>>n;
 }
 int getreg()
 {
 return rn;
 }
 char *getname()
 {
 return n;
 }
 };
 int main()
 {
 clrscr();
 fstream fill("students.dat",ios::in);//Assume file exists.
 fill.seekg(0,ios::end);//To reach to the end of file.
 int i;
 i=fill.tellg();//Reads the byte position.
 cout<<"The size of the file is "<<i<<endl;
 cout<<"Size of one record is "<<sizeof(student)<<endl;
 int i2=i/sizeof(student);//Calc. no. of records.
 cout<<"There are "<<i2<<" records in the file"<<endl;
 getch();
 return 0;
 }