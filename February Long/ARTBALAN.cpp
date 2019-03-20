#include<algorithm>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

int T,arr[26];
char str[1000010];

int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",str);
        int i=0,j=0,k=0,l=0,m,n;
        memset(arr,0,sizeof(arr));
        while(*(str+i)!='\0')
        {
            arr[*(str+i)-'A']+=1;i++;
        }
        vector <int> temp;
        for(j=0;j<26;j++)
            if(*(arr+j))
                {temp.push_back(*(arr+j));k++;}
        //n=k;
       // k=i/k;
        //l=k;
        sort(temp.begin(),temp.end(),greater<int>());
        vector <int> rp;
        k=1;
        while(k<=i)
        {
            if(i%k==0)
            {
                m=0;j=0;
                for(i=0;i<n;i++)
                {
                    if(m>=0)
                    {m=m+temp[i]-k;if(temp[i]>k) j=j+temp[i]-k;}
                    else
                    {
                        if(temp[i]<=(-1*m))
                            j+=temp[i];
                        else
                            m+=temp[i]-k;
                    }
                }
                rp.push_back(j);
            }
            k++;
        }
        sort(rp.begin(),rp.end());
        printf("%d\n",rp[0]);
        /*
        while(1)
        {
            if(i%l==0)
                break;
            l++;
        }
        if(n-k>=l-n)
            k=l;
        m=0;j=0;
        for(i=0;i<n;i++)
        {
            if(m>=0)
                {m=m+temp[i]-k;if(temp[i]>k) j=j+temp[i]-k;}
            else
            {
                if(temp[i]<=(-1*m))
                    j+=temp[i];
                else
                    m+=temp[i]-k;
            }
        }
        int a=0;m=0;
        for(i=0;i<n;i++)
        {
            if(m>=0)
                {m=m+temp[i]-l;if(temp[i]>l) a=a+temp[i]-l;}
            else
            {
                if(temp[i]<=(-1*m))
                    a+=temp[i];
                else
                    m+=temp[i]-l;
            }
        }
        if(a>j)
        printf("%d\n",j);
        else
        printf("%d\n",a);*/
    }
}
