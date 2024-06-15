#include<cstdio>
#include<iostream>
#include <cstring>
#include<math.h>
using namespace std;
double f(double x,double n)
{
    if (n=1)
    {
        return x/(1+x);
    }
    else
    {
        return x/(n+f(x,n-1));
    }
}
int main()
{
    int a=10;
    cout<<f(20,10)<<endl;
}