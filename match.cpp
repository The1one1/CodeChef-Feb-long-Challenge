#include<iostream>
using namespace std;
int main()
{
    unsigned long long int t,n;
    cin>>t;
    while(t--)
    {
        unsigned long long int n,y,x=0;
        cin>>n;
        do
        {
            y=n%10;
            n=n/10;
            if(y==0||y==6||y==9)
            {
                x+=6;
            }
            else if(y==2||y==3||y==5)
            {
                x+=5;
            }
            else 
            {
            switch(y)
            {
                case 1: x+=2;
                break;
                case 4: x+=4;
                break;
                case 7: x+=3;
                break;
                case 8: x+=7;
                break;
            }
            }
        }while(n>0);
          cout<<"x is:"  <<x<<endl;
        if(x%2==0)
        {
            x=x/2;
            while(x>0)
            {
                cout<<1;
                    x--;
            }
        }
        else
        {
            x=x-3;
            x=x/2;
            cout<<7;
            while(x>0)
            {
                cout<<1;
                x--;
            }   
        }
            cout<<endl;
    }
}
