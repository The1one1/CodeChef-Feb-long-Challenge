#include<iostream>
using namespace std;
#define PI 22/7
int main()
{
    unsigned long int d,r,x,y=0;
    cin>>d;
    while(d--)
    {
        cin>>r>>x;
        if((2*3.14*r)<(100*x))
        {
            y++;
        }
        cout<<"area:"<<2*PI*r<<endl;
    }
    cout<<y;
}