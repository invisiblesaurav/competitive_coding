#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char s[1000010];
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long int N,m;
		scanf("%ld",&m);
		scanf("%s",s);
		N=atoi(s);
		int i=0,j=0,k=0,l;
		if(N==0)
		{k=(m+1)/2;}
		else
		{
            j=m-1;
            while(s[i]!='1')
                i++;
            while(s[j]!='1')
                j--;
            k= (i/2)+(m-1-j)/2;l=j+1;
            j=i;i++;
            for(;i<l;i++)
            {
                if(s[i]=='1')
                {
                    k+=(i-j-2)/2;j=i;
                }
            }
		}
		printf("%d\n",k);
    }
}
