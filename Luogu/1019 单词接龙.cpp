#include<bits/stdc++.h>
using namespace std;
int n,i,j,ii,c[25],ans=-1;
string s[25],ss;
int hb(string s1,string s2)
{
    int l1=s1.size(),l2=s2.size();
    for (i=1; i<=min(l1,l2)-1; i++)
    {
        string ss1="",ss2="";
        for (j=l1-i; j<=l1-1; j++)
            ss1=ss1+s1[j];
        for (j=0; j<=i-1; j++)
            ss2=ss2+s2[j];
        bool bb=true;
        for (j=0; j<=i-1; j++)
            if (ss1[j]!=ss2[j]) bb=false;
        if (bb) return i;
    }
    return 0;
}
void dfs(int sum,string last)
{
    ans=max(ans,sum);
    for (int k=1; k<=n; k++)
    {
        if (c[k]>0)
        {
            int x=hb(last,s[k]);
            if (x>0)
            {
                c[k]--;
                dfs(sum+s[k].size()-x,s[k]);
                c[k]++;
            }
        }
    }
}
int main()
{
    cin>>n;
    for (i=1; i<=n; i++) 
		cin>>s[i],c[i]=2;
    cin>>s[0];
    for (ii=1;ii<=n;ii++)
    {
        if (s[ii][0]==s[0][0])
        {
            c[ii]--;
            dfs(s[ii].size(),s[ii]);
            for (i=1;i<=n;i++) c[i]=2;
        }

    }
    cout<<ans;
}
