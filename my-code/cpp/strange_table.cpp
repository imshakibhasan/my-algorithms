#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long  n,m,w,sum=1,count=1,i=1,v=1;
        cin>>n>>m>>w;
        unsigned long long d=n;
        while(count!=w)
        {
            sum+=m;
            if(count==n)
            {
                i++;
                sum=i;
                v++;
                n=d*v;
            }
            count++;
        }
        cout<<sum<<endl;
    }
}