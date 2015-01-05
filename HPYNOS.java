import java.util.*;
import java.math.BigInteger;
class HYPNOS
{
public static void main(String arg[])
{
Scanner ob=new Scanner(System.in);
int count=0;
BigInteger n,a,temp=BigInteger.valueOf(0),ten=BigInteger.valueOf(10),one=BigInteger.valueOf(1);
String s1="",s2="";
for(int i=1;i<=1;i++)
{
count=0;
temp=BigInteger.valueOf(0);
n=new BigInteger(ob.next());
while(true)
{
while(!(n.equals(BigInteger.valueOf(0))))
{
temp=temp.add(n.mod(ten).multiply(n.mod(ten)));
n=n.divide(ten);
}
count++;
if(temp.equals(one))
{
System.out.println(count);
break;
}
s2=""+temp;
if(s1.indexOf(s2)!=-1)
{
System.out.println("-1");
break;
}
s1=s1+temp;
n=temp;
temp=BigInteger.valueOf(0);
}
}
}}


