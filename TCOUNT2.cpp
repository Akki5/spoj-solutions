#include <iostream>
using namespace std;
int main()
{unsigned long long t, n, ans;cin>>t;while(t--)
{cin>>n;ans=0;if(n==0)
{printf("0\n");continue;
}if(n%2==0)
{ans+=3*n*(3*n-1)+3*n*(n-2)/2+2;n--;
}
ans+=n*((7*n*n+1)/2)+((3*n+1)/2)*((3*n-1)/2);
cout<<ans<<endl;
}
return 0;
}
