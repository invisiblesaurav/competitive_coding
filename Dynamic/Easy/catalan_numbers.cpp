#include<iostream>
#include<algorithm>
#define MAXN 100000

using namespace std;

long int arr[MAXN];

long int catalan_number(int n)
{
    arr[0]=arr[1]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<i;j++)
            arr[i]+=arr[j]*arr[i-j-1];
    }
    return arr[n];
}

int main()
{
    fill_n(arr,MAXN,0);
    int n;
    cin>>n;
    cout<<"The catalan number is "<<catalan_number(n);
}
