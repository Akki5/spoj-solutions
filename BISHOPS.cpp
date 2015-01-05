#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
	char num[110];
	while(scanf("%s",&num)!=EOF)
	{
		if(strlen(num)==1&&int(num[0]-'0')==1){
			cout<<"1\n";
			continue;
		}
		else if(strlen(num)==1&&int(num[0]-'0')==0){
			cout<<"0\n";
			continue;
		}
		else
		{
			int l=strlen(num);
			int mod[l+1];
			int carry=0;
			for(int i=l;i>0;i--)
			{
				int n= num[i-1]-'0';
				mod[i]= 2*n + carry;
				carry = mod[i]/10;
				mod[i]= mod[i]%10;
			}
			mod[l]-=2;
			mod[0]=carry;
			for(int i=l;i>=0;i--)
				if(mod[i]<0)
				{
					mod[i-1]--;
					mod[i]+=10;
				}
			int k=0;
			if(mod[0]==0) k=1;
			for(int i=k;i<l+1;i++) cout<<mod[i];
			cout<<endl;
		}
	}
	return 0;
}
