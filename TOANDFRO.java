import java.util.*;
class TOANDFRO
{
public static void main(String arg[])
{
Scanner ob=new Scanner(System.in);
int r=1,c=1,a=0;
String s;
char A[][];
c=ob.nextInt();
while(c!=0)
{
a=0;
s=ob.next();
r=s.length()/c;
A=new char[r][c];
for(int i=0;i<r;i++)
{
if(i%2==0)
for(int j=0;j<c;j++)
A[i][j]=s.charAt(a++);
else
for(int j=c-1;j>=0;j--)
A[i][j]=s.charAt(a++);
}
s="";
for(int j=0;j<c;j++)
for(int i=0;i<r;i++)
s=s+A[i][j];
System.out.println(s);
c=ob.nextInt();
}
}
}

