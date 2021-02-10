#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int t;
	cin>>t;
    while(t--)
    {
	long int n,y,x=0;
	cin>>n>>y;				
	bool prime[n + 1]={0};    //array to store 0 and 1;
	for (long int p = 2; p * p <= n; p++)
	{
		if (prime[p] == 0) 
		{
	        // updates values of array with 1 if they are multiple of p;
			for (int i = p * p; i <= n; i += p)   
			{
				if(prime[i]==0)
				x++;                     // here x is calculating non prime no's
				if((n-x-1)<=y)
				{
					cout<<"Chef\n";
					goto last;
				}                 
				prime[i]=1;
			}
		}
	}
		if((n-x-1)>y)					// n-x-1 is = no of prime number
			cout<<"Divyam\n";	
		else 
		    cout<<"Chef\n";
		last:;
    }
    return 0;
}


