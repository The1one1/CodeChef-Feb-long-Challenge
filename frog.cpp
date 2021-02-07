#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    short n;
    cin>>n;
    short l[n],w[n];
    for(short i=0;i<n;i++)
        cin>>w[i];
    for(short i=0;i<n;i++)
        cin>>l[i];
    short index,d,count=0,j,k,q=2;
    for(short i=0;i<n;i++)
    {
        if(w[i]==1)
		   index=i;
    }
    d=index;
    for(int i=2;i<=n;i++)
    {
        index=d;
        for(j=0;j<n;j++)
        {
            if(w[j]==i)
            {
                d=j;
                k=j;
            }
        }
        if(d>index)
			continue;
        else
        {
        	q=2;
            while(q)
            {
                d=d+l[k];
                count++;
                if(d>index)
                	q=0;
            }
        }
    }
    cout<<count<<endl;
    }
}