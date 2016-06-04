#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<iomanip.h>
main()
{clrscr();
FILE *fp, *ft;
char a,c;
struct rail{
char name[50],tname[50],tc[40],tb[20];
char gender[10],dob[10],tnum[20];
char mob[20],age[3];};
struct rail e;
char mob[50];
long int recsize;
fp=fopen("c:/rail.txt","rb+");
if(fp==NULL) {
fp=fopen("c:/rail.txt","wb+");
if(fp==NULL)
{puts("Cannot open file");
return 0;}}
recsize=sizeof(e);
while(1) {
clrscr();
 gotoxy(15,5);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
 gotoxy(15,6);cout<<"³ þþþþþþþ RAILWAY PASSENGER TRACKING SYSTEM þþþþþþþ ³";
 gotoxy(15,7);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
 gotoxy(15,9);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
gotoxy(15,10);cout<<"³  1. Passenger Registration                        ³";
gotoxy(15,11);cout<<"³  2. View Passenger List                           ³";
gotoxy(15,12);cout<<"³  3. Edit Passenger Info                           ³";
gotoxy(15,13);cout<<"³  4. Delete Passenger                              ³";
gotoxy(15,14);cout<<"³  5. Search Passenger                              ³";
gotoxy(15,15);cout<<"³  6. Exit                                          ³";
gotoxy(15,16);cout<<"³                                                   ³";
gotoxy(15,17);cout<<"³ Enter your choice :                               ³";
gotoxy(15,18);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
fflush(stdin);
gotoxy(37,17);c=getche();
clrscr();
switch(c)
{case'1':
fseek(fp,0,SEEK_END);
a='Y';
while(a=='Y'||a=='y')
{clrscr();
 gotoxy(15,5);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
 gotoxy(15,6);cout<<"³ þþþþþþ RAILWAY PASSENGER REGISTRATION FORM þþþþþþ ³";
 gotoxy(15,7);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
 gotoxy(15,8);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
 gotoxy(15,9);cout<<"³ Name               :                              ³";
gotoxy(15,10);cout<<"³ Mobile Number      :                              ³";
gotoxy(15,11);cout<<"³ Gender             :                              ³";
gotoxy(15,12);cout<<"³ Date of Birth      :                              ³";
gotoxy(15,13);cout<<"³ Age                :                              ³";
gotoxy(15,14);cout<<"³ Train Name         :                              ³";
gotoxy(15,15);cout<<"³ Train Number       :                              ³";
gotoxy(15,16);cout<<"³ Train Coach        :                              ³";
gotoxy(15,17);cout<<"³ Train Berth Number :                              ³";
gotoxy(15,18);cout<<"³                                                   ³";
gotoxy(15,19);cout<<"³ Register Another Passenger(y/n):                  ³";
gotoxy(15,20);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
gotoxy(39,9);gets(e.name);
gotoxy(39,10);cin>>e.mob;
gotoxy(39,11);cin>>e.gender;
gotoxy(39,12);cin>>e.dob;
gotoxy(39,13);cin>>e.age;
gotoxy(39,14);gets(e.tname);
gotoxy(39,15);cin>>e.tnum;
gotoxy(39,16);gets(e.tc);
gotoxy(39,17);gets(e.tb);
fwrite(&e,recsize,1,fp);
fflush(stdin);
gotoxy(51,19);a=getche();}
break;
case'2':
clrscr();
rewind(fp);
cout<<"ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ";
cout<<"\n";
cout<<"Passenger Name";
cout<<"\t\tMobile Number";
cout<<"\t\tGender";
cout<<"\t\tAge";
cout<<endl;
cout<<"ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ";
while(fread(&e,recsize,1,fp)==1){
cout<<e.name;
cout<<"\t\t"<<e.mob;
cout<<"\t\t"<<e.gender;
cout<<"\t\t"<<e.age<<"\n";}
cout<<"\n";
getch();
break;
case'3' :
clrscr();
a='Y';
while(a=='Y'||a=='y')
{
 gotoxy(15,5);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
 gotoxy(15,6);cout<<"³ þþþþþþþ RAILWAY PASSENGER INFO EDIT MENU þþþþþþþþ ³";
 gotoxy(15,7);cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
 gotoxy(15,8);cout<<"³ Mobile Number      :                              ³";
 gotoxy(15,9);cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
gotoxy(15,10);cout<<"³ Name               :                              ³";
gotoxy(15,11);cout<<"³ Mobile Number      :                              ³";
gotoxy(15,12);cout<<"³ Gender             :                              ³";
gotoxy(15,13);cout<<"³ Date of Birth      :                              ³";
gotoxy(15,14);cout<<"³ Age                :                              ³";
gotoxy(15,15);cout<<"³ Train Name         :                              ³";
gotoxy(15,16);cout<<"³ Train Number       :                              ³";
gotoxy(15,17);cout<<"³ Train Coach        :                              ³";
gotoxy(15,18);cout<<"³ Train Berth Number :                              ³";
gotoxy(15,19);cout<<"³                                                   ³";
gotoxy(15,20);cout<<"³ Edit Another Member(y/n) :                        ³";
gotoxy(15,21);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
gotoxy(39,8);cin>>mob;
rewind(fp);
while(fread(&e,recsize,1,fp)==1)
{if(strcmp(e.mob,mob)==0)
{gotoxy(39,10);gets(e.name);
gotoxy(39,11);cin>>e.mob;
gotoxy(39,12);cin>>e.gender;
gotoxy(39,13);cin>>e.dob;
gotoxy(39,14);cin>>e.age;
gotoxy(39,15);gets(e.tname);
gotoxy(39,16);cin>>e.tnum;
gotoxy(39,17);gets(e.tc);
gotoxy(39,18);gets(e.tb);
fseek(fp,-recsize,SEEK_CUR);
fwrite(&e,recsize,1,fp);
break;}}
fflush(stdin);
gotoxy(45,20);a=getche();
}
break;
case'4':
clrscr();
a='Y';
while (a=='Y'||a=='y')
{
 gotoxy(15,5);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
 gotoxy(15,6);cout<<"³  þþ RAILWAY PASSENGER TICKET CANCELLATION MENU þþ ³";
 gotoxy(15,7);cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
 gotoxy(15,8);cout<<"³ Mobile Number :                                   ³";
 gotoxy(15,9);cout<<"³                                                   ³";
gotoxy(15,10);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
gotoxy(34,8);gets(mob);
ft=fopen("c:/tempa.dat","wb");
rewind(fp);
while(fread(&e,recsize,1,fp)==1)
if(strcmp(e.mob,mob)!=0)
{fwrite(&e,recsize,1,ft);}
fclose(fp);
fclose(ft);
remove("c:/rail.txt");
rename("c:/tempa.dat","c:/rail.txt");
fp=fopen("c:/rail.txt","rb+");
gotoxy(17,9);cout<<"Delete Another Member (y/n):";
fflush(stdin);
gotoxy(47,9);a=getche();
}
break;
case'5':
clrscr();
a='Y';
while (a=='Y'||a=='y')
{clrscr();
 gotoxy(15,5);cout<<"ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿";
 gotoxy(15,6);cout<<"³ þþþþþþþþþþþ SEARCH RAILWAY PASSENGER þþþþþþþþþþþþ ³";
 gotoxy(15,7);cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
 gotoxy(15,8);cout<<"³ Enter Mobile Number:                              ³";
 gotoxy(15,9);cout<<"ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´";
gotoxy(15,10);cout<<"³ Name               :                              ³";
gotoxy(15,11);cout<<"³ Mobile Number      :                              ³";
gotoxy(15,12);cout<<"³ Gender             :                              ³";
gotoxy(15,13);cout<<"³ Date of Birth      :                              ³";
gotoxy(15,14);cout<<"³ Age                :                              ³";
gotoxy(15,15);cout<<"³ Train Name         :                              ³";
gotoxy(15,16);cout<<"³ Train Number       :                              ³";
gotoxy(15,17);cout<<"³ Train Coach        :                              ³";
gotoxy(15,18);cout<<"³ Train Berth Number :                              ³";
gotoxy(15,19);cout<<"³                                                   ³";
gotoxy(15,20);cout<<"³ Search Another Member(y/n) :                      ³";
gotoxy(15,21);cout<<"ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ";
gotoxy(39,8);cin>>mob;
rewind(fp);
while(fread(&e,recsize,1,fp) == 1)
{if(strcmp(e.mob,mob) == 0)
{gotoxy(39,10);cout<<e.name;
gotoxy(39,11);cout<<e.mob;
gotoxy(39,12);cout<<e.gender;
gotoxy(39,13);cout<<e.dob;
gotoxy(39,14);cout<<e.age;
gotoxy(39,15);cout<<e.tname;
gotoxy(39,16);cout<<e.tnum;
gotoxy(39,17);cout<<e.tc;
gotoxy(39,18);cout<<e.tb;
}}

fflush(stdin);
gotoxy(47,20);a=getche();
}
break;
case'6':
fclose(fp);
exit(0);}}
getch();
}