#include<iostream>
#include<algorithm>

using namespace std;

int n,k;

int main()
{
    int i,j,k;
    long long int l=0;
    scanf("%d%d",&n,&k);
    long long int arr[n];
    for(i=0;i<n;i++)
        scanf("%lld",(arr+i));
    string s;
    cin>>s;j=0;
    for(i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            if((i-j+1)>k)
                sort((arr+j),(arr+i+1),greater<int>());
            j=i+1;
        }
    }
    j=0;
    for(i=0;i<n;i++)
    {
        do
        {
            if((i-j+1)<=k)
                l+=arr[i];
            i++;
        }while(s[i]==s[i-1]);
        j=i;i--;
    }
    printf("%lld",l);
}
