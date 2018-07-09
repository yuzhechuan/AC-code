#include<bits/stdc++.h>
using namespace std;

int n,t,s,a[101];

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		t+=a[i];
	}
	t/=n;
	for(int i=1;i<=n-1;i++)
		if(a[i]!=t)
		{
			s++;
			a[i+1]+=a[i]-t;
		}
	printf("%d",s);
}
