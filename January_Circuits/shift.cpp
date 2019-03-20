#include<bits/stdc++.h>

using namespace std;

int main()
{
	char c[1000000];
	scanf("%s",c);
	int k,i,j,l=0,m=0,n,p,q=0,x=26;
	scanf("%d",&k);j=strlen(c);
	int a[j];
	for(i=0;i<j-1;i++)
	{
		n=(c[i+1]-c[i])%x;p=(c[i]-c[i+1])%x;
		if(n<p)
			a[i]=n;
		else
			a[i]=p;
		if(a[i])
		{
			l++;
		}
	}
	i=0;
	for(i=0;i<j;i++)
		printf("%d",a[i]);
	while(l>k&&i<j)
	{
		if(a[i])
		{l--;q+=a[i]*(i+1);}
		i++;
	}
	printf("\n%d",q);
}
