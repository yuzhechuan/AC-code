#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a[10000],b[10000],g[10000],k[10000],x,y;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	cin>>x>>y;
	for(int i=n;i>=1;i--)
		if(x>=a[i]&&x<=a[i]+g[i]&&y>=b[i]&&y<=b[i]+k[i])
		{
			cout<<i;
			return 0;
		} 
	cout<<-1;
}
