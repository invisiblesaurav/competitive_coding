#include<stdio.h>
#include<iostream>
#include<cstring>

using namespace std;

int T,N,alpha[26][1000];


int main()
{
    scanf("%d",&T);char str[1000][210];int i,j,k;
    while(T--)
    {
        scanf("%d",&N);
        for(i=0;i<26;i++)
        {
            for(j=0;j<N;j++)
                alpha[i][j]=0;
        }
        for(i=0;i<N;i++)
        {
            scanf("%s",str[i]);
        }
        for(i=0;i<N;i++)
        {
            j=0;
            while(str[i][j]!='\0')
            {
                k=(str[i][j]-'a');
                alpha[k][i]+=1;j++;
            }
        }
        k=0;
        for(i=0;i<26;i++)
        {
            for(j=0;j<N;j++)
            {
                if(!alpha[i][j])
                    break;
            }
            if(j>=N)
                k++;
        }
        printf("%d\n",k);
    }

}
