import java.util.*;
import java.math.BigInteger;
class LASTDIG2
{
public static void main(String arg[])
{
Scanner ob=new Scanner(System.in);
int t=ob.nextInt();
for(int i=1;i<=t;i++)
{
BigInteger a=new BigInteger(ob.next());
BigInteger b=new BigInteger(ob.next());
a=a.mod(BigInteger.valueOf(10));
int a1=Integer.parseInt(""+a);
if(b.equals(BigInteger.valueOf(0)))
System.out.println("1");
else if(a1==0||a1==1||a1==5||a1==6)
System.out.println(a);
else
{
b=b.mod(BigInteger.valueOf(4));
int b1=Integer.parseInt(""+b);
if(b1==0)
b1=4;
System.out.println(((int)Math.pow(a1,b1))%10);
}}
}
}
