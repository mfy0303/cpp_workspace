#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,x;
    cin>>a>>b>>c>>d>>x;
    float f=a*pow(x,3)+b*pow(x,2)+c*x+d;
    printf("%-100.7f",f);
    return 0;
}