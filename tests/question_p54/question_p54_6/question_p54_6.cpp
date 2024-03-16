//question:can three lines make a triangle?
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if ((c<a+b)&&(c>abs(a-b)))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}