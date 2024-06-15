#include<cstdio>
#include<iostream>
#include <cstring>
#include<math.h>
using namespace std;
int add_range(int a)
{
    if (a>100)
    {
        return 0;
    }
    else
    {
        return a+add_range(a+1);
    }
}
int main()
{
    int a=1;
    cout<<add_range(a);
    return 0;
}