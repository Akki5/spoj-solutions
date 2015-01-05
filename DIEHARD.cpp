#include <iostream>
#include <math.h>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
 int t,h,a,ans;
 scanf("%d",&t);
 while(t--)
 {
            ans=0;
          scanf("%d %d",&h,&a);
          h+=3;a+=2;
          while(true)
          {
                      ans++;
                      if(a>10)
                      {
                              if(h<=5)
                              {
                                      break;
                              }
                              else
                              {
                                  h-=5;
                                  a-=10;
                              }
                      }
                      else
                      {
                          if(h<=20)
                          {
                                   break;
                          }
                          else
                          {
                              h-=20;
                              a+=5;
                          }
                      }
                      ans++;
                      h+=3;
                      a+=2;
          }
          printf("%d\n",ans);
 }
}


