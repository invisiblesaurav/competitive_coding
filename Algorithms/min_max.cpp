#include<bits/stdc++.h>

using namespace std;

void min_max(int i,int j,int arr[],int *minu,int *maxu)
{
    if(i<(j-1))
    {
        int mid,min1,max1;
        mid=(i+j)/2;
        min_max(i,mid,arr,minu,maxu);
        min_max(mid+1,j,arr,&min1,&max1);
        if(min1<*minu)
            *minu=min1;
        if(*maxu<max1)
            *maxu=max1;
    }
    else
    {
        if(arr[i]<arr[j])
        {*minu=arr[i];*maxu=arr[j];}
        else
        {*minu=arr[j];*maxu=arr[i];}
    }
}

int main()
{
    int arr[]={20,12,90,54,20,0,78};
    int i=0,j=0,minu,maxu;
    j=sizeof(arr)/sizeof(arr[0]);
    min_max(i,j-1,arr,&minu,&maxu);
    cout<<"Minimum is "<<minu<<" and maximum is "<<maxu;
}
