#include <bits/stdc++.h> 
using namespace std; 
long int a=0;
void printArray(vector<long long int> arr,long int n,long int m) 
{ 
	int sum=0;
	
	for (long int i = 0; i < n; i++) 
		{	
			if(n<=m)
				 sum^=arr[i];	 
		} 
		a+=sum;
		a=a%998244353;
} 
void printSubsequences(vector<long long int> arr, long int index,vector<long long int> subarr,long int m) 
{ 
	if (index == arr.size()) 
	{ 
		int l = subarr.size(); 
		if (l != 0) 
			printArray(subarr, l, m); 
	} 
	else
	{ 
		printSubsequences(arr, index + 1, subarr,m); 
		subarr.push_back(arr[index]); 
		printSubsequences(arr, index + 1, subarr,m); 
	} 
	return; 
} 
int main() 
{ 
	long int k,l,m;
	cin>>k;
	vector<long long int> arr;
	for(long int i=0;i<k;i++)
	{
		cin>>l;
		arr.push_back(l);
	} 
	long int q;
	cin>>q;
	while(q--)
	{
		a=0;
	    cin>>m;	
	    vector<long long int> b; 
	    printSubsequences(arr, 0, b,m); 
        cout<<a<<endl;
	}
	return 0; 	
} 

