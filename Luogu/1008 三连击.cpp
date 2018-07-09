#include<stdio.h>
#include<string.h>
int a[10];
int main()
{
    for (int x=123;x<=329;x++)
	{     
        int i=x,j=x*2,k=x*3;
        int o=i,p=j,q=k;
        int flag=0;                         
        memset(a,0,sizeof(a));
        while(i>0)
		{                        
            a[i%10]++;
            i/=10;
        }
        if(flag==1) continue;
        while(j>0)
		{
            a[j%10]++;
            j/=10;
        }
        while(k>0)
		{
            a[k%10]++;
            k/=10;
        }
        for (int w=1;w<=9;w++)
            if(a[w]!=1) flag=1;
        if(flag==0) printf("%d %d %d\n",o,p,q);
    }
}
