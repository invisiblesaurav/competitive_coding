#include<iostream>
#include<algorithm>
#define MAXN 1000

int arr[MAXN];

using namespace std;

int solve(int n)
{
    arr[0]=1;
    int i2=0,i3=0,i5=0;
    for(int i=1;i<=n;i++)
    {
        arr[i]=min(arr[i2]*2,arr[i3]*3,arr[i5]*5);
        if(arr[i]==arr[i2]*2)
            i2++;
        else if(arr[i]==arr[i3]*3)
            i3++;
        else
            i5++;
    }
}

int main()
{
    int n;
    cin>>n;
    fill_n(arr,MAXN,-1);
    solve(n);
    cout<<arr[n];
}
