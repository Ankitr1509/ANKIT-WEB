//Floyd Triangle
import java.util.Scanner;
class floyd
{
int a,x,y,s=1;
void accept()
{
System.out.println("Enter the value upto whih you want to draw Floyd Triangle:\n");
Scanner s1=new Scanner(System.in);
a=s1.nextInt();
}
void tri()
{
for(x=1;x<=a;x++)
{
for(y=1;y<=x;y++)
{
System.out.print(s+" ");
s++;
}
System.out.println();
}
}
public static void main(String a[])
{
floyd c1= new floyd();
c1.accept();
c1.tri();
}
}
/*PROGRAM OUTPUT
Microsoft Windows [Version 10.0.10586]
(c) 2015 Microsoft Corporation. All rights reserved.

C:\Users\Ankit Rawat>cd desktop/JAVA PROGRAM

C:\Users\Ankit Rawat\Desktop\JAVA PROGRAM>javac floyd.java

C:\Users\Ankit Rawat\Desktop\JAVA PROGRAM>java floyd
Enter the value upto whih you want to draw Floyd Triangle:

5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

C:\Users\Ankit Rawat\Desktop\JAVA PROGRAM> */