#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,n,j,a[1001];
	cin>>n;
	a[1]=1;
	a[2]=2;
	for(i=3;i<=n;i++)
	{
		a[i]=1;
		for(j=1;j<=i/2;j++)
		a[i]+=a[j];
	}		
	cout<<a[n];
}
