#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x,y;
    cin>>x>>y;
    if ((0<=x)&&(x<5))
    {
        y=-x+2.5;
        printf("%-100.3f",y);
    }
    if ((5<=x)&&(x<10))
    {
        y=2-1.5*(x-3)*(x-3);
        printf("%-100.3f",y);
    }
    if ((10<=x)&&(x<20))
    {
        y=x/2-1.5;
        printf("%-100.3f",y);
    }
}