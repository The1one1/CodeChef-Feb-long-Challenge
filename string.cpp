#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="jjgidgzhfkkjjskdvbkk";
    int count[26];
    for(int i=0;i<26;i++)
    {
        count[i]=0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        count[s[i]-'a']++;
    }
    int m=0;
    char index;
    for(int i=0;i<26;i++)
    {
        if(count[i]>m)
        {
            m=count[i];
            index=i+'a';

        }
    }    
    cout<<"frequency of "<<index<<" is "<<m<<endl;
}
