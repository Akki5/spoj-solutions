import java.util.*;
class ADDREV
{
public static void main(String arg[])
{
Scanner ob=new Scanner(System.in);
int t=ob.nextInt();
int a=0,b=0,sum=0;
ADDREV dd=new ADDREV();
for(int i=1;i<=t;i++)
{
a=ob.nextInt();
b=ob.nextInt();
sum=dd.reverse(a)+dd.reverse(b);
sum=dd.reverse(sum);
System.out.println(sum);
}
}
int reverse(int n)
{
int rev=0;
while(n!=0)
{
rev=(rev*10)+(n%10);
n=n/10;
}
return rev;
}
}
