#include <bits/stdc++.h>
#define sc(t) scanf("%d",&t)
#define wr(t) printf("%s\n",t)
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t;
    sc(t);
    while(t--)
    {
        int n,i,j;
        sc(n);
        int l[n],g[n];
        for(i=0;i<n;i++)
        {
            sc(l[i]);
        }
        for(i=0;i<n;i++)
        {
            sc(g[i]);
        }
        bool a1=true,a2=true;
        for(i=0;i<n;i++)
        {
            if(l[i]>g[i])
            {
                a1=false;
                break;
            }
        }
        
        for(i=0;i<n;i++)
        {
            if(l[i]>g[(n-1)-i])
            {
                a2=false;
                break;
            }
        }
        
        if(a1==true && a2==true)
        {
            wr("both");
        }
        else if(a1==true && a2==false)
        {
            wr("front");
        }
        else if(a1==false && a2==true)
        {
            wr("back");
        }
        else
        {
            wr("none");
        }
    }
    return 0;
}
