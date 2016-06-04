import java.util.Scanner;
class gor
{
String b[]=new String[50];
String p[]=new String[50];
int a[]=new int[50];
//int a[50]; This not allowed.
int i,d,e,y=0,x,z,h,k,j,m,r,g;
Scanner s=new Scanner(System.in);
void accept()
{
System.out.println("Welcome to Gorcery Store: \n");
for(i=0;i<=50;i++)
{
System.out.println("Enter the vegetable you want to buy: \n");
b[i]=s.next();

System.out.println("Enter the vegetable Quantity you want to buy(in Kg): \n");
a[i]=s.nextInt();

y=y+a[i];
System.out.println("Do you want to buy more vegetable?(1.YES/2.NO) \n");
d=s.nextInt();
if(d==2)
break;
}
}
void display()
{
System.out.println("Gorcery you have Brought: \n");
for(e=0;e<=i;e++)
{
System.out.println("You have brought "+b[e]);
System.out.println("Quantity of item "+a[e]);
}
System.out.println("Total Weight of Veggy "+y);
}
void add()
{
System.out.println("Do you want to add more vegetable?(1.YES/2.NO) \n");
x=s.nextInt();
z=i;
if(x==1)
{
for(z=i+1;z<=50;z++)
{
System.out.println("Enter the vegetable you want to buy: \n");
b[z]=s.next();
System.out.println("Enter the vegetable Quantity you want to buy(in Kg): \n");
a[z]=s.nextInt();
y=y+a[z];
System.out.println("Do you want to buy more vegetable?(1.YES/2.NO) \n");
d=s.nextInt();
if(d==2)
break;
}
}
else
System.out.println("Thank You for Shopping :) \n");
}
void displayadd()
{
System.out.println("Gorcery you have Brought after adding items: \n");
for(e=0;e<=z;e++)
{
System.out.println("You have brought "+b[e]);
System.out.println("Quantity of item "+a[e]);
}
System.out.println("Total Weight of Veggy "+y);
}
void remove()
{
System.out.println("Do you want to  remove any vegetable?(1.YES/2.NO) \n");
j=s.nextInt();
if(j==1)
{
for(m=0;m<=50;m++)
{
System.out.println("Which vegetable you want to remove? \n");
p[m]=s.next();
System.out.println("How much quantity you want to remove? \n");
g=s.nextInt();
for(r=0;r<=z;r++)
{
if(p[m].equals(b[r]))
{
a[r]=a[r]-g;
y=y-g;
}
else
continue;
}
System.out.println("Do you want to remove more vegetable?(1.YES/2.NO) \n");
d=s.nextInt();
if(d==2)
break;
}
}
else
System.out.println("Thank You for Shopping :) \n");
}
void displayremove()
{
System.out.println("Gorcery you have Brought after removing Items/Current Items: \n");
for(e=0;e<=z;e++)
{
System.out.println("You have brought "+b[e]);
System.out.println("Quantity of item "+a[e]);
}
System.out.println("Total Weight of Veggy "+y);
}


public static void main(String c[])
{
gor c1= new gor();
c1.accept();
c1.display();
c1.add();
c1.displayadd();
c1.remove();
c1.displayremove();
}
}