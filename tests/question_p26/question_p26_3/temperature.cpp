#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float f;
    printf("please input a number(°f)");
    cin>>f;
    float c=5*(f-32)/9;
    printf("%-100.5f",c);
    return 0;
}