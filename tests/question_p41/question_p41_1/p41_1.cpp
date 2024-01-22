#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    double a,b;
    int k=1;
    double r;
    cin>>a>>b;
    while (k!=0)
    {
        r=a-(double)k*b;
        if ((0<=r)&&(r<b))
        {
           cout<<r<<endl;
           k=0;
        }
        else
        {
            k=k+1;
        }
    }
    return 0;
}