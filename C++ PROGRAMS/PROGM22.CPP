/*Write an application that reads the content of any existing text file
 in reverse order. */
 #include<fstream.h>
 #include<conio.h>
 void main()
 {
 char boy[50],ch;
 int pos;
 clrscr();
 cout<<"Enter File Name(Here file name is boy) ";//This file should be in bin folder.
 cin>>boy;
 ifstream fill("boy.dat");
 /*The seekg() and tellg() member functions are defined in the istream class.
 The seekp() and tellp() member functions are defined in the ostram class.
 We can also use them to modify the content of text file by pointing to start
 or end of file and by suing read() & write() member functions edit the text
 file. */
 fill.seekg(-1,ios::end);//Seeks to the end file.
 pos=fill.tellg();//Reads the total no. of characters.
 while(pos>=0)
 {
 pos=pos-1;//To move the crusor to the previous.
 fill.read((char*)&ch,sizeof(char));//Read a Character.
 cout<<ch;
 fill.seekg(-2,ios::cur);
 }
 getch();
 }


