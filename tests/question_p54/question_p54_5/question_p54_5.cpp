#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if ((a>b)&&(a>c))
    {
        cout<<a<<endl;
    }
    if ((b>c)&&(b>a))
    {
        cout<<b<<endl;
    }
    if ((c>a)&&(c>b))
    {
        cout<<c<<endl;
    }
    return 0;
}