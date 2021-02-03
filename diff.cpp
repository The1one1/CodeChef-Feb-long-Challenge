#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long int n;
	cin>>n;
	long long int a[n],sum=0,index=0,i,j,y;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	int rem=sum%7;
	for(j=0;j<*max_element(a,a+n);j++)
	{
	for( i=0;i<n;i++)
	{
		if(a[i]==rem+7*j)
		{
			index=i;
			goto last;
		}	
	}
    }
    last:
    	if(index!=0)
            cout<<index;
        else
            cout<<-1<<endl;
}