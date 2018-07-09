#include <bits/stdc++.h>
using namespace std;
int n,i,j;
int main() 
{
    scanf("%d",&n);
    while(n>j)
    {
        i++;
        j+=i;
    }
    if(i%2==1)printf("%d/%d",j-n+1,i+n-j);
    else printf("%d/%d",i+n-j,j-n+1);
}-
