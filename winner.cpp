#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int x,y,b=0;
        cin>>x>>y;
        for(long i=2;i<=x;i++)
        {
        	for(long j=2;j*j<i;j++)
        	{
        		if(i%j==0)
        			goto last;
			}
				b++;
				if(b>y)
				{
				    cout<<"Divyam\n";
					goto end;
				}
				last:;
		}
        cout<<"Chef\n";  
		end:;
	}
}

