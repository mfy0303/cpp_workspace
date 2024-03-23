#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long mul=1;
    for(long long i=1;i<=20;++i)
    {
        mul=mul*i;
    }
    cout<<mul;
    return 0;
}