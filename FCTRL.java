import java.util.*;
class FCTRL
{
public static void main(String arg[])
{
Scanner ob=new Scanner(System.in);
int t=ob.nextInt();
int z=0,n=0,temp=5;
for(int i=1;i<=t;i++)
{
n=ob.nextInt();
z=0;
temp=5;
while(temp<=n)
{
z+=(n/temp);
temp*=5;
}
System.out.println(z);
}
}
}
