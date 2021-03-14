#include<bits/stdc++.h>

using namespace std;
int main()
{  
    srand(time(0));   //randomize the number generator
        
    start:
  int r = (rand()%32)+ 8;
  if(r<8||r>32)
    {
        goto start;
    }
   for (int n =1; n<=r; n++)
    {    
        int d=(rand()%122+33);
        if(d>=91&&d<=96||(d>=39&&d<=47)||(d>=58&&d<=63)||d==34||(d<33||d>122))
        {
            n--;
            continue;
        }
        cout<<(char)d;
    }
}
