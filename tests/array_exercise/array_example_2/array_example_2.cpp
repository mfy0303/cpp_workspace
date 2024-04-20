#include<cstdio>
#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    for (int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    memset(a,0,sizeof(a));
    for (int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}