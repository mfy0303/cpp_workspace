#include<cstdio>
#include<iostream>
#include <cstring>
using namespace std;
int plus_me(int a,int b)
{
    int c=a+b;
    cout<<c;
    return 0;
}
int minus_me(int a,int b)
{
    int c=a-b;
    cout<<c;
    return 0;
}
int main()
{
    plus_me(3,5);
    minus_me(3,5);
    return 0;
}