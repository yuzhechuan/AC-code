#include <bits/stdc++.h>
using namespace std;

int x,y,ans;

int gcd(int x,int y)
{
    if(y==0)    {return x;}
    return gcd(y,x%y);
}

int main()
{
    cin>>x>>y;
    for(int i=x;i<=floor(sqrt(x*y));i++)
    if(x*y%i==0&&gcd(x*y/i,i)==x)ans++;
    cout<<ans*2;
}
