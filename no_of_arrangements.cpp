#include<iostream>
#include<vector>
#include<algorithm>
#define MAXN 10

using namespace std;

int dp[MAXN];

int solve(int x)
{
    if(x<0)
        return(0);
    if(x==0)
        return 1;
    if(dp[x]!=-1)
        return dp[x];
    return dp[x]=solve(x-1)+solve(x-3)+solve(x-5);
}

int main()
{
    int x;
    cin>>x;
    std::fill_n(dp,MAXN,-1);
    solve(x);
    cout<<dp[6];
}
