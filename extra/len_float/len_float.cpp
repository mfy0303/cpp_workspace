#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a=sizeof(float);
    int b=sizeof(double);
    int c=sizeof(long double);
    cout<<"float is "<<a<<endl;
    cout<<"double is "<<b<<endl;
    cout<<"long double is "<<c<<endl;
    return 0;
}