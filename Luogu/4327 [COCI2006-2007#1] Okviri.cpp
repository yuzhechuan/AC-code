#include <bits/stdc++.h>
using namespace std;

char c,a[17];
int n;

int main()
{
	//freopen("1.out","w",stdout);
	scanf("%s",a+1);
	n=strlen(a+1);
	
	for(int i=1;i<=n;i++)
	if(i%3!=0) printf("..#.");
	else printf("..*.");
	printf(".\n");
	
	for(int i=1;i<=n;i++)
	if(i%3!=0) printf(".#.#");
	else printf(".*.*");
	printf(".\n");
	
	printf("#");
	for(int i=1;i<=n;i++)
	{
		if(i%3==0) printf("*.%c.*",a[i]);
	    if(i%3==1)printf(".%c.#",a[i]);
	    if(i%3==2)printf(".%c.",a[i]);
	}
	if(n%3==2)cout<<'#';
	printf("\n");
	
	for(int i=1;i<=n;i++)
	if(i%3!=0) printf(".#.#");
	else printf(".*.*");
	printf(".\n");
	
	for(int i=1;i<=n;i++)
	if(i%3!=0) printf("..#.");
	else printf("..*.");
	printf(".\n");
} 
