#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double r;
    cin>>r;
    double v = 4/3*3.14*pow(r,3);
    printf("%-100.2f",v);
    return 0;
}