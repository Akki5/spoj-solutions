# include <iostream>
# include <cstdio>

using namespace std;
typedef unsigned long long int ulli;
ulli K,N;
int recurse(ulli n)
{
    if(n == 1)
        return 1;
    else
    {
        if(n%2)
            return recurse((n+1)/2);
        else
            return !(recurse(n/2));
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    int T;
    scanf("%d",&T);
    for(int test = 1; test <= T; test++)
    {
        scanf("%llu%llu",&N,&K);
        int c = recurse(K);
        if(c == 1)
        cout<<"Male"<<endl;
        else
        cout<<"Female"<<endl;
        cout<<endl;
    }
    return 0;
}
