#include<cstdio>
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    if ((a>0)&&(b>0))
    {
        if (a<(pow(2,31)-b))
        {
            c=a+b;
        }
        else
        {
            printf("overflow");
        }
    }
    else if ((a<0)&&(b<0))
    {
        if (a>(-pow(2,31)-b-1))
        {
            c=a+b;
        }
        else
        {
            printf("underflow");
        }
    }
    else
    {
        c=a+b;
    }
    cout<<c<<endl;
}  
    
   