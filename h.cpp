#include<iostream>
using namespace std;
int h;
int main()
{
    long int n,m,k;
	int x=0;
	cin>>n>>m>>k;
	int a[n],t[k+1];
	for(int i=0;i<n;i++)
	{
		int a=0;
		for(int j=0;j<(k+1);j++)
		{
			cin>>t[i];
			if(j<k)
			   a+=t[i];
			if(j>=k)
			h=t[i];
		}
		if(a>=m&&h<=10)
		{
			x++;
		}
	}
	cout<<x;
	
}
