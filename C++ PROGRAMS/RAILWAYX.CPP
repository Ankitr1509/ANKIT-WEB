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
 gotoxy(15,5);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
 gotoxy(15,6);cout<<"� ������� RAILWAY PASSENGER TRACKING SYSTEM ������� �";
 gotoxy(15,7);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
 gotoxy(15,9);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(15,10);cout<<"�  1. Passenger Registration                        �";
gotoxy(15,11);cout<<"�  2. View Passenger List                           �";
gotoxy(15,12);cout<<"�  3. Edit Passenger Info                           �";
gotoxy(15,13);cout<<"�  4. Delete Passenger                              �";
gotoxy(15,14);cout<<"�  5. Search Passenger                              �";
gotoxy(15,15);cout<<"�  6. Exit                                          �";
gotoxy(15,16);cout<<"�                                                   �";
gotoxy(15,17);cout<<"� Enter your choice :                               �";
gotoxy(15,18);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
fflush(stdin);
gotoxy(37,17);c=getche();
clrscr();
switch(c)
{case'1':
fseek(fp,0,SEEK_END);
a='Y';
while(a=='Y'||a=='y')
{clrscr();
 gotoxy(15,5);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
 gotoxy(15,6);cout<<"� ������ RAILWAY PASSENGER REGISTRATION FORM ������ �";
 gotoxy(15,7);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
 gotoxy(15,8);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
 gotoxy(15,9);cout<<"� Name               :                              �";
gotoxy(15,10);cout<<"� Mobile Number      :                              �";
gotoxy(15,11);cout<<"� Gender             :                              �";
gotoxy(15,12);cout<<"� Date of Birth      :                              �";
gotoxy(15,13);cout<<"� Age                :                              �";
gotoxy(15,14);cout<<"� Train Name         :                              �";
gotoxy(15,15);cout<<"� Train Number       :                              �";
gotoxy(15,16);cout<<"� Train Coach        :                              �";
gotoxy(15,17);cout<<"� Train Berth Number :                              �";
gotoxy(15,18);cout<<"�                                                   �";
gotoxy(15,19);cout<<"� Register Another Passenger(y/n):                  �";
gotoxy(15,20);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
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
cout<<"袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴";
cout<<"\n";
cout<<"Passenger Name";
cout<<"\t\tMobile Number";
cout<<"\t\tGender";
cout<<"\t\tAge";
cout<<endl;
cout<<"袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴";
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
 gotoxy(15,5);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
 gotoxy(15,6);cout<<"� ������� RAILWAY PASSENGER INFO EDIT MENU �������� �";
 gotoxy(15,7);cout<<"쳐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
 gotoxy(15,8);cout<<"� Mobile Number      :                              �";
 gotoxy(15,9);cout<<"쳐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(15,10);cout<<"� Name               :                              �";
gotoxy(15,11);cout<<"� Mobile Number      :                              �";
gotoxy(15,12);cout<<"� Gender             :                              �";
gotoxy(15,13);cout<<"� Date of Birth      :                              �";
gotoxy(15,14);cout<<"� Age                :                              �";
gotoxy(15,15);cout<<"� Train Name         :                              �";
gotoxy(15,16);cout<<"� Train Number       :                              �";
gotoxy(15,17);cout<<"� Train Coach        :                              �";
gotoxy(15,18);cout<<"� Train Berth Number :                              �";
gotoxy(15,19);cout<<"�                                                   �";
gotoxy(15,20);cout<<"� Edit Another Member(y/n) :                        �";
gotoxy(15,21);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
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
 gotoxy(15,5);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
 gotoxy(15,6);cout<<"�  �� RAILWAY PASSENGER TICKET CANCELLATION MENU �� �";
 gotoxy(15,7);cout<<"쳐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
 gotoxy(15,8);cout<<"� Mobile Number :                                   �";
 gotoxy(15,9);cout<<"�                                                   �";
gotoxy(15,10);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
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
 gotoxy(15,5);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
 gotoxy(15,6);cout<<"� ����������� SEARCH RAILWAY PASSENGER ������������ �";
 gotoxy(15,7);cout<<"쳐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
 gotoxy(15,8);cout<<"� Enter Mobile Number:                              �";
 gotoxy(15,9);cout<<"쳐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(15,10);cout<<"� Name               :                              �";
gotoxy(15,11);cout<<"� Mobile Number      :                              �";
gotoxy(15,12);cout<<"� Gender             :                              �";
gotoxy(15,13);cout<<"� Date of Birth      :                              �";
gotoxy(15,14);cout<<"� Age                :                              �";
gotoxy(15,15);cout<<"� Train Name         :                              �";
gotoxy(15,16);cout<<"� Train Number       :                              �";
gotoxy(15,17);cout<<"� Train Coach        :                              �";
gotoxy(15,18);cout<<"� Train Berth Number :                              �";
gotoxy(15,19);cout<<"�                                                   �";
gotoxy(15,20);cout<<"� Search Another Member(y/n) :                      �";
gotoxy(15,21);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
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