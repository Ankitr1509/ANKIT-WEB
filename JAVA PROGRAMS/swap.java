//Swap two variable without 3rd variable.
import java.util.Scanner;
class swap
{
float x,y;
void accept()
{
System.out.println("Enter X: \n");
Scanner s1=new Scanner(System.in);
x=s1.nextInt();
System.out.println("Enter Y: \n");
y=s1.nextInt();
}
void display()
{
x=x+y;
y=x-y;
x=x-y;
System.out.println("Swapped value of X= "+x);
System.out.println("Swapped value of Y= "+y);
}
public static void main(String a[])
{
swap c1= new swap();
c1.accept();
c1.display();
}
}
/*PROGRAM OUTPUT
Microsoft Windows [Version 10.0.10586]
(c) 2015 Microsoft Corporation. All rights reserved.

C:\Users\Ankit Rawat>cd desktop/JAVA PROGRAM

C:\Users\Ankit Rawat\Desktop\JAVA PROGRAM>javac swap.java

C:\Users\Ankit Rawat\Desktop\JAVA PROGRAM>java swap
Enter X:

12
Enter Y:

15
Swapped value of X= 15.0
Swapped value of Y= 12.0

C:\Users\Ankit Rawat\Desktop\JAVA PROGRAM> */