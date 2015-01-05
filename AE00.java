import java.util.*;
class AE00
{
public static void main(String arg[])
{
Scanner ob=new Scanner(System.in);
int n=ob.nextInt();
int c=0;
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
if((i*j)<=n)
c++;
}
System.out.println(c);
}
}
