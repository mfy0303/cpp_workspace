#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a=sizeof(short);
    int b=sizeof(int);
    int c=sizeof(long);
    int d=sizeof(long long int);
    int e=sizeof(unsigned);
    int f=sizeof(unsigned short);
    int g=sizeof(unsigned long);
    int h=sizeof(unsigned long long);
    cout<<"short is "<<a<<endl;
    cout<<"int is "<<b<<endl;
    cout<<"long is "<<c<<endl;
    cout<<"long long is "<<d<<endl;
    cout<<"unsigned is "<<e<<endl;
    cout<<"unsigned short is "<<f<<endl;
    cout<<"unsigned long is "<<g<<endl;
    cout<<"unsigned long long is "<<h<<endl;
    return 0;
}