#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int T,d,res;
    long long int N;
    vector <int> vect;
    cin>>T;
    while(T--)
    {
        cin>>N>>d;
        int j=0,k=10,m=0;
        for(int i=10;N>0;N/=10)
        {
            vect.push_back(N%i);
            if(k>vect[j])
            {k=vect[j];m=j;}
            j++;
        }
        if(k<d)
        {
            res=k;
            for(int i=m-1;i>=0;i--)
            {
                res=res*10+vect[i];
            }
            for(int i=j-m-1;i>0;i--)
            {
                res=res*10+d;
            }
        }
        else
        {
            res=k;
            for(int i=j-1;i>0;i--)
                res=res*10+d;
        }
        cout<<res<<endl;
    }
}
