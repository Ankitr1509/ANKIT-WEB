import java.util.Scanner;
class calc
{
int a,b,c;
Scanner s1=new Scanner(System.in);
void accept()
{
System.out.println("Enter the value of A: ");
a=s1.nextInt();
System.out.println("Enter the value of B: ");
b=s1.nextInt();
}
void sum()
{
int t=a+b;
System.out.println("The Sum of A+B = "+t);
}
void sub()
{
int t=a-b;
System.out.println("The Difference of A-B = "+t);
}
void div()
{
float t=a/b;
System.out.println("The Division of A/B = "+t);
}
void mul()
{
int t=a*b;
System.out.println("The Multiplication of A*B = "+t);
}
void mod()
{
int t=a%b;
System.out.println("The remainder of A/B = "+t);
}
public static void main(String a[])
{
calc c1= new calc();
int ch,ch1;
do
{
System.out.println("CALCULATOR: ENTER YOUR CHOICE(1-5) \n1. SUM \n2. SUBSTRACTION \n3. DIVISION \n4. MULTIPLICATION \n5.MODULOUS(REMANINDER)\n");
Scanner s2=new Scanner(System.in);
ch=s2.nextInt();
switch(ch)
{
case 1:
{
c1.accept();
c1.sum();
break;
}
case 2:
{
c1.accept();
c1.sub();
break;
}
case 3:
{
c1.accept();
c1.div();
break;
}
case 4:
{
c1.accept();
c1.mul();
break;
}
case 5:
{
c1.accept();
c1.mod();
break;
}
default:
break;
}
System.out.println("\nDo you want to calculate something more?(1.YES/2.NO)");
ch1=s2.nextInt();
}while(ch1==1);

}
}

/*
PROGRAM OUTPUT
Microsoft Windows [Version 10.0.10240]
(c) 2015 Microsoft Corporation. All rights reserved.

C:\Users\MRuser>cd desktop/java program

C:\Users\MRuser\Desktop\JAVA PROGRAM>javac calc.java

C:\Users\MRuser\Desktop\JAVA PROGRAM>java calc
CALCULATOR: ENTER YOUR CHOICE(1-5)
1. SUM
2. SUBSTRACTION
3. DIVISION
4. MULTIPLICATION
5.MODULOUS(REMANINDER)

1
Enter the value of A:
12
Enter the value of B:
15
The Sum of A+B = 27

Do you want to calculate something more?(1.YES/2.NO)
1
CALCULATOR: ENTER YOUR CHOICE(1-5)
1. SUM
2. SUBSTRACTION
3. DIVISION
4. MULTIPLICATION
5.MODULOUS(REMANINDER)

3
Enter the value of A:
10
Enter the value of B:
5
The Division of A/B = 2.0

Do you want to calculate something more?(1.YES/2.NO)
2

C:\Users\MRuser\Desktop\JAVA PROGRAM> */