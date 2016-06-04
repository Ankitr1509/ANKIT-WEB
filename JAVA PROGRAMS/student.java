import java.util.Scanner;
class student
{
int id,marks,age;
String name;
float ch;

void accept()
{
Scanner s=new Scanner(System.in);
System.out.println("Enter your I.D.?");
id=s.nextInt();
System.out.println("Enter your Marks?");
marks=s.nextInt();
System.out.println("Enter your Age?");
age=s.nextInt();
System.out.println("Enter your Name?");
name=s.next();//I don't understand why nextLine is working here ??
}
void display()
{
System.out.println("Your I.D. "+id);
System.out.println("Your Marks "+marks);
System.out.println("Your Age "+age);
System.out.println("Your Name "+name);
}
public static void main(String a[])
{
student a1= new student();//Object Creation
a1.accept();
a1.display();
student a2= new student();//Object Creation
a2.accept();
a2.display();
}
}
/* 
PROGRAM OUTPUT

Microsoft Windows [Version 10.0.10240]
(c) 2015 Microsoft Corporation. All rights reserved.

C:\Users\MRuser>cd desktop\java program

C:\Users\MRuser\Desktop\JAVA PROGRAM>javac student.java

C:\Users\MRuser\Desktop\JAVA PROGRAM>java student
Enter your I.D.?
1103021011
Enter your Marks?
100
Enter your Age?
21
Enter your Name?
Ankit Rawat
Your I.D. 1103021011
Your Marks 100
Your Age 21
Your Name Ankit
Enter your I.D.?
123456
Enter your Marks?
90
Enter your Age?
21
Enter your Name?
Divya Khatri
Your I.D. 123456
Your Marks 90
Your Age 21
Your Name Divya

C:\Users\MRuser\Desktop\JAVA PROGRAM>

Here you can see while we are entering full name of student but only first name is showing in display function
as next(); do not accept any entering after space. We can use nextLine(); to over come this problem but 
it's not working in this program. */