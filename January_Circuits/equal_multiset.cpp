#include<bits/stdc++.h>

#define mod 1000000007

using namespace std;

int main()
{
	int N;
	scanf("%d",&N);
	long long int A[N]={0},B[N]={0},j=0;
	int i;
	for(i=0;i<N;i++)
		scanf("%lld",(A+i));
	for(i=0;i<N;i++)
	{
		scanf("%lld",(B+i));
	}
	sort(A,A+N);sort(B,B+N);
	for(i=0;i<N;i++)
	{
		A[i]=A[i]-B[i];
		if(A[i]<0)A[i]=(-A[i])%mod;
		else A[i]=A[i]%mod;
		j=j+A[i];
	}
	j=j%mod;
	printf("%lld",j);	
}
