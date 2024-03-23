#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float h,h_all;
    cin>>h;
    h_all=h;
    for(int i=1;i<=9;++i)
    {
        h=h/2;
        h_all+=2*h;
    }
    h=h/2;
    cout<<h<<endl;
    cout<<h_all<<endl;
    return 0;
}