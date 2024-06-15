#include<cstdio>
#include<iostream>
#include <cstring>
#include<math.h>
using namespace std;
double f(double x,double n)
{
    if (n=1)
    {
        return sqrt(1+x);
    }
    return sqrt(n+f(x,n-1));
}
int main()
{
    double x=4.2;
    double n=10;
    cout<<f(x,n);
    return 0;
}