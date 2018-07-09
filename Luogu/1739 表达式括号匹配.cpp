#include <bits/stdc++.h>
using namespace std;

int p;
char c;
 
int main()
{
	cin>>c;
	while(c!='@')
	{
		if(c=='(')p++;
		if(c==')')p--;
		if(p<0)
		{
			cout<<"NO";
			return 0;
		}
		cin>>c;
	}
	if(p>0)cout<<"NO";
	else cout<<"YES";
}
