#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

char str[1010];


int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        int arr[100010][5]={0};
        int j=0,k=0;
        for(int i=0;i<N;i++)
        {
            scanf("%s",str);j=0;
            while(str[j]!='\0')
            {
                if(str[j]=='a')
                    arr[i][0]=1;
                else if(str[j]=='e')
                    arr[i][1]=1;
                else if(str[j]=='i')
                    arr[i][2]=1;
                else if(str[j]=='o')
                    arr[i][3]=1;
                else if(str[j]=='u')
                    arr[i][4]=1;
                j++;
            }
        }
        for(int i=0;i<N-1;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                if((arr[i][0]||arr[j][0])&&(arr[i][1]||arr[j][1])&&(arr[i][2]||arr[j][2])&&(arr[i][3]||arr[j][3])&&(arr[i][4]||arr[j][4]))
                    k++;
            }
        }
        cout<<k<<endl;
    }
}
