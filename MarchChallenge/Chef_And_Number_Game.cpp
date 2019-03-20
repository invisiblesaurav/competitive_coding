#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        long int arr1[N],arr2[N];
        int i=0,j=0,k=0;
        while(N--)
        {
            cin>>k;
            if(k<0)
            {arr2[j]=k;j++;}
            else
            {arr1[i]=k;i++;}
        }
        if(i==0)
            cout<<j<<" "<<j;
        else if(j==0)
            cout<<i<<" "<<i;
        else{
        if(i<j)
            cout<<j<<" "<<i;
        else
            cout<<i<<" "<<j;
        }
    }
}
