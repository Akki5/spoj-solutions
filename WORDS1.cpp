#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<cstring>
using namespace std;
int vis[27],in[27],out[27];
char arr[1999];
int parent[26];
int find(int x)
{
    while(parent[x] != x)x = parent[x];
     return x ;
}
int addedge(int v1,int v2)
{
    int p1=find(v1);
    int p2=find(v2);
    if(p1 != p2) parent[p2] = p1 ;
}
int main()
{
    int nt;
    scanf("%d",&nt);
    while(nt--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<26;++i) vis[i] = in[i] = out[i] = 0 , parent[i] = i;
        for(int i=0;i<n;++i)
        {
            scanf("%s",arr);
            vis[arr[0]-'a']=1;
            vis[arr[strlen(arr)-1]-'a']=1;
            in[arr[strlen(arr)-1]-'a']+=1;
            out[arr[0]-'a']+=1;
            addedge(arr[0]-'a',arr[strlen(arr)-1]-'a');
        }
        bool ok=true;
        int o1 = 0 , o2 = 0;
        for(int i=0;i<26;++i) {
            if(in[i] != out[i]) {
                if(in[i] == out[i] + 1) o1 ++;
                else if(in[i] + 1 == out[i]) o2 ++ ;
                else {
                    ok=false;break ;
                }
            }
        }
        if(o1 > 1 || o2 > 1) ok  =false;
        int cnt = 0;
        for(int i=0;i<26;++i) if(parent[i] == i && vis[i]) ++ cnt ;
        if(cnt > 1) ok = false;
        if(ok)cout <<"Ordering is possible.\n";
        else cout <<"The door cannot be opened.\n";
    }
}
