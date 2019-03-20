#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<vector>
int main()
{
	int q,n;
	char s[1000000],c[1000000];
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d",&n);
		scanf("%s",s);
		std::vector <int> m;
		c[0]=s[0];c[1]='\0';
		int p,q,k=1,i=0,j=0;
		p=atoi(c);
		q=atoi((s+1));
		if(p<q)
		{
			printf("YES\n");int a,b=1;
			i=j+1;j+=b;k=i;
			while(j<n)
			{
				c[j-i+1]='\0';a=j;
				while(i<=a)
				{
					c[a-i]=s[a];a--;
				}
				q=atoi(c);
				if(p<q)
				{
					m.push_back(p);k=i;
					i=j+1;p=q;j+=b;
				}
				else
				{
					b++;j++;
				}
			}
			if(i<n)
			{	c[n-k]='\0';i=1;
				while(k<n)
				{
					c[n-k-1]=s[n-i];k++;i++;
				}
				q=atoi(c);
				m.push_back(q);
			}
			else
				m.push_back(q);
			printf("%ld\n",m.size());
			for(i=0;i<m.size();i++)
				printf("%d ",m[i]);
		}
		else
			printf("NO\n");
	}
}
