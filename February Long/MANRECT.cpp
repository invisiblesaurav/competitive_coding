#include<bits/stdc++.h>

using namespace std;

#define w 1000000000


int T;

int main()
{
    cin>>T;
    while(T--)
    {
        int xu,yu,xl,yl,a,b,c,d,e,i;
        cout<<"Q "<<0<<" "<<0<<"\n"<<flush;
        cin>>a;
        cout<<"Q "<<w<<" "<<0<<"\n"<<flush;
        cin>>b;
        cout<<"Q "<<0<<" "<<w<<"\n"<<flush;
        cin>>c;
        d=(a-b+w)/2;
        cout<<"Q "<<d<<" "<<0<<"\n"<<flush;
        cin>>yl;
        xl=a-yl;
        xu=w+yl-b;
        yu=xl+w-c;
        cout<<"A "<<xl<<" "<<yl<<" "<<xu<<" "<<yu<<"\n"<<flush;
        cin>>i;
        //if(i==-1)
         //   exit(0);
    }
}
