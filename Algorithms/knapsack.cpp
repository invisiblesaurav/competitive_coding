#include<bits/stdc++.h>

using namespace std;

void knapSack(int n,int w,int wt[],int val[])
{
    int k[n+1][w+1];
    for(int i=0;i<=n;i++)
        for(int j=0;j<=w;j++)
        {
            if(i==0||j==0)
                k[i][j]=0;
            else if(wt[i-1]<=w)
                k[i][j]=max(val[i-1]+k[i-1][j-wt[i-1]],k[i-1][j]);
            else
                k[i][j]=k[i-1][j];
        }
       // cout<<*(k+w+n*w);
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=w;j++)
            {
                cout<<k[i][j]<<"  ";
            }
            cout<<endl;
        }

}

int main()
{
    int wt[]={10,20,42,45,63,2,3,1,45};
    int val[]={122,4,32,45,8,90,87,0,9};
    int n,w;
    //int wt[]={1,1,1};
    //int val[]={10,20,30};
    n=sizeof(wt)/sizeof(wt[0]);
    cin>>w;
    sort(wt,wt+n);
    int k[n+1][w+1];
    knapSack(n,w,wt,val);
}
