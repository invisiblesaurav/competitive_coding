#include<bits/stdc++.h>

#define w 1000000007

using namespace std;

int gcdExtended(int a, int b, int *x, int *y);


int modInverse(int a, int m)
{
    int x, y;
    int g = gcdExtended(a, m, &x, &y);
    if(g==1)
    {
        int res = (x%m + m) % m;                                        //code from geeks for geeks
        return res;
    }
}

int gcdExtended(int a, int b, int *x, int *y)
{
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = gcdExtended(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}

int main()
{
    int T,N,K,M;
    scanf("%d",&T);
    while(T--)
    {
        int P,Q,i,j,k;
        scanf("%d%d%d",&N,&K,&M);
        if(M&1)
        {
            i=M+1;i=i/2;
            Q=pow(N,i);
            P=Q-pow(N-1,i);
        }
        else
        {
            i=M;i=i/2;
            j=pow(N,i);
            k=pow(N-1,i);
            Q=j*(N+K);
            P=Q-(N+K-1)*k;
        }
        i=sqrt(P);
        for(j=2;j<=i;j++)
        {
            if(P%j==0&&Q%j==0)
            {
                P=P/j;Q=Q/j;
            }
        }
        j=modInverse(Q,w);
        printf("%d\n",(j*P)%w);
    }
}
