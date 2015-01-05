import java.util.*;
import java.math.BigInteger;
class LASTDIG
{
public static void main(String arg[])
{
Scanner ob=new Scanner(System.in);
int t=ob.nextInt();
for(int i=1;i<=t;i++)
{
int a=ob.nextInt();
BigInteger b=new BigInteger(ob.next());
a=a%10;
if(b.equals(BigInteger.valueOf(0)))
System.out.println("1");
else if(a==0||a==1||a==5||a==6)
System.out.println(a);
else
{
b=b.mod(BigInteger.valueOf(4));
int b1=Integer.parseInt(""+b);
if(b1==0)
b1=4;
System.out.println(((int)Math.pow(a,b1))%10);
}}
}
}
