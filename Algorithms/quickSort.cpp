#include<bits/stdc++.h>

using namespace std;

int part(int arr[],int i,int j)
{
    int pivot=arr[i],a=i,b=j+1,temp;
    while(1)
    {
        do
        {
            b--;
        }while(arr[b]>pivot);
        do
        {
            a++;
        }while(arr[a]<=pivot);
        if(b>a)
        {
            temp=arr[b];
            arr[b]=arr[a];
            arr[a]=temp;
        }
        else
            break;
    }
    temp=arr[b];
    arr[b]=pivot;
    arr[i]=temp;
    return b;
}

void quick_sort(int arr[],int i,int j)
{
    if(i<j)
    {
        int m;
        m=part(arr,i,j);
        quick_sort(arr,i,m-1);
        quick_sort(arr,m+1,j);
    }
}

int main()
{
    int arr[]={1,5,4,45,41,0,56,30,1,1,1,INT_MAX};
    int i=0,j;
    j=sizeof(arr)/sizeof(arr[0]);
    //i=part(arr,i,j-2);
    //i=part(arr,i+1,j-2);
    quick_sort(arr,i,j-2);
    for(i=0;i<j-1;i++)
        cout<<arr[i]<<" ";
}
