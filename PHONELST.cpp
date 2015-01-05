#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int main(void)
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		vector <string> lst;
		for( int i=0 ; i<n ; i++ )
		{
			string s;
			cin>>s;
			lst.push_back(s);
		}
		bool flag=false;
		sort(lst.begin(),lst.end());
		for( int i=0 ; i<n-1 ; i++)
		{
			if(lst[i+1].find(lst[i])==0)
			{
                                        flag=!flag;
                                        break;
            }
		}
		if(!flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
	return 0;
}

