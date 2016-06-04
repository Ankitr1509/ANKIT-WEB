import java.util.Scanner;
class fac
{
int a,b,s=1;
void accept()
{
System.out.println("Enter the value upto which you want fatorial: \n");
Scanner s1=new Scanner(System.in);
b=s1.nextInt();
}
void display()
{
for(a=1;a<=b;a++)
{
s=s*a;

}
System.out.println("Factorial: "+s);
}
public static void main(String a[])
{
fac c1= new fac();
c1.accept();
c1.display();
}
}
/*PROGRAM OUTPUT
Microsoft Windows [Version 10.0.10586]
(c) 2015 Microsoft Corporation. All rights reserved.

C:\Users\Ankit Rawat>cd desktop/JAVA PROGRAM

C:\Users\Ankit Rawat\Desktop\JAVA PROGRAM>javac fac.java

C:\Users\Ankit Rawat\Desktop\JAVA PROGRAM>java fac
Enter the value upto which you want fatorial:
5
Factorial: 120

C:\Users\Ankit Rawat\Desktop\JAVA PROGRAM> */