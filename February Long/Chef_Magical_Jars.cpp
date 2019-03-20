#include<stdio.h>

int T,N;
long long int a,b;

int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        int i,j,k;b=0;
        for(i=0;i<N;i++)
        {
            scanf("%lld",&a);
            b+=a;
        }
        b=b-N+1;
        printf("%lld\n",b);
    }
}
