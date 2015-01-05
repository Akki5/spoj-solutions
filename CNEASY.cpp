#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

#define INF (1<<30)

using namespace std;

float pos[1000];

int main(){
        int n, t, i;
        float min;
        string s;
        scanf("%d", &t);
        while(t--)
        {
                scanf("%d", &n);
                min=INF;
                for(i=0; i<n; i++)
                        cin>>s>>pos[i];
                sort(pos, pos+n);
                if(n<3)
                {
                        min=pos[1]-pos[0];
                        if(360-(pos[1]-pos[0])<min)
                                min=360-(pos[1]-pos[0]);
                }
                else
                {
                for(i=1; i<n-1; i++)
                {
                        if(360-(pos[(i+1)%n]-pos[i])<min)
                                min=360-(pos[(i+1)%n]-pos[i]);
                        if(360-(pos[i]-pos[(n+i-1)%n])<min)
                                min=360-(pos[i]-pos[(n+i-1)%n]);
                }
                if(pos[n-1]-pos[0]<min)
                        min=pos[n-1]-pos[0];
                if(360-(pos[n-1]-pos[n-2])<min)
                        min=360-(pos[n-1]-pos[n-2]);
                }
                printf("%.0f\n", ceil(min*12));
        }
        return 0;
}
