#include"stdio.h"
#include"string.h"
#include"stdlib.h"
#include"conio.h"
#include"iomanip.h"
main()
{clrscr();
FILE *fp, *ft;
char a,c;
struct clan{
char name[50],codename[50];
char gender[10],add[100];
char number[20];};
struct clan e;
char number[50];
long int recsize;
fp=fopen("c:/clan.txt","rb+");
if(fp==NULL) {
fp=fopen("c:/clan.txt","wb+");
if(fp==NULL)
{puts("Cannot open file");
return 0;}}
recsize=sizeof(e);
while(1) {
clrscr();
 gotoxy(23,5);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴커";
 gotoxy(23,6);cout<<"� ������ WELCOME TO MY CLAN ������ �";
 gotoxy(23,7);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴켸";
 gotoxy(23,9);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴커";
gotoxy(23,10);cout<<"�  1. Register                     �";
gotoxy(23,11);cout<<"�  2. View List Member             �";
gotoxy(23,12);cout<<"�  3. Edit Member Info             �";
gotoxy(23,13);cout<<"�  4. Delete Member                �";
gotoxy(23,14);cout<<"�  5. Search Member                �";
gotoxy(23,15);cout<<"�  6. Exit                         �";
gotoxy(23,16);cout<<"�                                  �";
gotoxy(23,17);cout<<"� Enter your choice :              �";
gotoxy(23,18);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴켸";
fflush(stdin);
gotoxy(45,17);c=getche();
clrscr();
switch(c)
{case'1':
fseek(fp,0,SEEK_END);
a='Y';
while(a=='Y'||a=='y')
{clrscr();
gotoxy(20,10);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴커";
gotoxy(20,11);cout<<"� ���� CLAN REGISTRATION FORM ���� �";
gotoxy(20,12);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴켸";
gotoxy(20,13);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(20,14);cout<<"� Full Name :                       �";
gotoxy(20,15);cout<<"� Code Name :                       �";
gotoxy(20,16);cout<<"� Gender    :                       �";
gotoxy(20,17);cout<<"� Number    :                       �";
gotoxy(20,18);cout<<"� Address   :                       �";
gotoxy(20,19);cout<<"�                                   �";
gotoxy(20,20);cout<<"� Register Another Member(y/n):     �";
gotoxy(20,21);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(34,14);gets(e.name);
gotoxy(34,15);gets(e.codename);
gotoxy(34,16);cin>>e.gender;
gotoxy(34,17);cin>>e.number;
gotoxy(34,18);gets(e.add);
fwrite(&e,recsize,1,fp);
fflush(stdin);
gotoxy(52,20);a=getche();}
break;
case'2':
clrscr();
rewind(fp);
cout<<"袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴";
cout<<"\n";
cout<<"Gender";
cout<<"\t\tCellNumber";
cout<<"\t\tCode Name";
cout<<endl;
cout<<"袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴";
while(fread(&e,recsize,1,fp)==1){
cout<<e.gender;
cout<<"\t\t"<<e.number;
cout<<"\t\t"<<e.codename<<"\n";}
cout<<"\n";
getch();
break;
case'3' :
clrscr();
a='Y';
while(a=='Y'||a=='y')
{
gotoxy(20,10);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(20,11);cout<<"� ���� CLAN EDIT MEMBER INFO ���� �";
gotoxy(20,12);cout<<"쳐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(20,13);cout<<"� Number    :                     �";
gotoxy(20,14);cout<<"쳐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(20,15);cout<<"� Full Name :                     �";
gotoxy(20,16);cout<<"� Code Name :                     �";
gotoxy(20,17);cout<<"� Gender    :                     �";
gotoxy(20,18);cout<<"� Number    :                     �";
gotoxy(20,19);cout<<"� Address   :                     �";
gotoxy(20,20);cout<<"�                                 �";
gotoxy(20,21);cout<<"� Edit Another Member(y/n):       �";
gotoxy(20,22);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(34,13);cin>>number;
rewind(fp);
while(fread(&e,recsize,1,fp)==1)
{if(strcmp(e.number,number)==0)
{gotoxy(34,15);gets(e.name);
gotoxy(34,16);gets(e.codename);
gotoxy(34,17);cin>>e.gender;
gotoxy(34,18);cin>>e.number;
gotoxy(34,19);gets(e.add);
fseek(fp,-recsize,SEEK_CUR);
fwrite(&e,recsize,1,fp);
break;}}
fflush(stdin);
gotoxy(48,21);a=getche();
}
break;
case'4':
clrscr();
a='Y';
while (a=='Y'||a=='y')
{
gotoxy(20,10);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(20,11);cout<<"� ���� CLAN DELETE MEMBER INFO ���� �";
gotoxy(20,12);cout<<"쳐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(20,13);cout<<"� Number    :                       �";
gotoxy(20,14);cout<<"�                                   �";
gotoxy(20,15);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
gotoxy(34,13);gets(number);
ft=fopen("c:/temp.dat","wb");
rewind(fp);
while(fread(&e,recsize,1,fp)==1)
if(strcmp(e.number,number)!=0)
{fwrite(&e,recsize,1,ft);}
fclose(fp);
fclose(ft);
remove("c:/clan.txt");
rename("c:/temp.dat","c:/clan.txt");
fp=fopen("c:/clan.txt","rb+");
gotoxy(22,14);cout<<"Delete Another Member (y/n):";
fflush(stdin);
gotoxy(50,14);a=getche();
}
break;
case'5':
clrscr();
a='Y';
while (a=='Y'||a=='y')
{clrscr();
gotoxy(20,10);cout<<"旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴커";
gotoxy(20,11);cout<<"�       SEARCH CLAN MEMBER       �";
gotoxy(20,12);cout<<"쳐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴캑";
gotoxy(20,13);cout<<"� Enter No. :                    �";
gotoxy(20,14);cout<<"쳐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴캑";
gotoxy(20,15);cout<<"� Full Name :                    �";
gotoxy(20,16);cout<<"� Code Name :                    �";
gotoxy(20,17);cout<<"� Gender    :                    �";
gotoxy(20,18);cout<<"� Number    :                    �";
gotoxy(20,19);cout<<"� Address   :                    �";
gotoxy(20,20);cout<<"�                                �";
gotoxy(20,21);cout<<"� Search Another Member(y/n):    �";
gotoxy(20,22);cout<<"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴켸";
gotoxy(34,13);cin>>number;
rewind(fp);
while(fread(&e,recsize,1,fp) == 1)
{if(strcmp(e.number,number) == 0)
{gotoxy(34,15);cout<<e.name;
gotoxy(34,16);cout<<e.codename;
gotoxy(34,17);cout<<e.gender;
gotoxy(34,18);cout<<e.number;
gotoxy(34,19);cout<<e.add;
}}

fflush(stdin);
gotoxy(50,21);a=getche();
}
break;
case'6':
fclose(fp);
exit(0);}}
getch();
}