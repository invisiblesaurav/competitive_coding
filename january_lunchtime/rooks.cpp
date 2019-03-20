#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int T,N,K;
    for(cin>>T;T--;)
    {
        cin>>N>>K;
        int row[N]={0},col[N]={0};
        int i=K,j,k,r,c;
        while(i--)
        {
            cin>>r>>c;
            row[r-1]=1;col[c-1]=1;
        }
        cout<<N-K<<" ";
        i=0;j=0;
        while(i<N||j<N)
        {
            for(;i<N;i++)
            {
                if(!row[i])
                {
                    cout<<i+1<<" ";i++;break;
                }
            }
            for(;j<N;j++)
            {
                if(!col[j])
                {
                    cout<<j+1<<" ";j++;break;
                }
            }
        }
    }
}
