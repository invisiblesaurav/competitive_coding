#include<stdio.h>

int T,N,a[10000],d[10000],b[10000];

int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        int i,j=N-1,k;
        for(i=0;i<N;i++)
            scanf("%d",(a+i));
        for(i=0;i<N;i++)
        {
            scanf("%d",(d+i));
        }
        for(i=1;i<j;i++)
            *(b+i)=*(d+i)-*(a+i-1)-*(a+i+1);
        *(b)=*(d)-*(a+1)-*(a+j);
        *(b+j)=*(d+j)-*(a)-*(a+j-1);
        j=0;k=0;
        for(i=0;i<N;i++)
        {
            if(*(b+i)>0)
            {
                if(*(d+i)>j)
                {
                    j=*(d+i);
                    k=i;
                }
            }
        }
        if(j<=0)
            printf("-1\n");
        else
            printf("%d\n",*(d+k));
    }
}
