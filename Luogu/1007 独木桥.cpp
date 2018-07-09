#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,x,maxx,minx;
    maxx=minx=0;
    scanf("%d%d",&l,&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(max(l-x+1,x)>maxx)maxx=max(l-x+1,x);
        minx=max(minx,min(l-x+1,x));
    }
    printf("%d %d",minx,maxx);
}
