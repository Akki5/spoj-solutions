import java.util.*;
import java.math.*;
class VERODOOM
{
public static void main(String arg[])throws Exception
{
Scanner ob=new Scanner(System.in);
BigInteger n;
BigInteger zero=new BigInteger("0");
BigInteger one=new BigInteger("1");
BigInteger two=new BigInteger("2");
int t=ob.nextInt();
while(t>0)
{
	n=new BigInteger(ob.next());
n=((n.multiply(n.add(one))).multiply(n.add(two))).divide(two);
System.out.println(n);
t--;
}
}
}
