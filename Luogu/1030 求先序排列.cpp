#include <bits/stdc++.h>
using namespace std;

char s1[10],s2[10];
int len;

inline int find(char ch)
{
    for(int i=0;i<len;i++)
		if(s1[i]==ch) return i;
}

void dfs(int l1,int r1,int l2,int r2)
{
    int m=find(s2[r2]);
    cout<<s2[r2];
    if(m>l1) dfs(l1,m-1,l2,r2-r1+m-1); 
    if(m<r1) dfs(m+1,r1,l2+m-l1,r2-1);
}	

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    cin>>s1;
    cin>>s2;
    len=strlen(s1);
    dfs(0,len-1,0,len-1);
}
