#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int h,r;
    cin>>h>>r;
    int need=20*1000;
    int v=pi*r*r*h;
    int answer=need/v;
    int least = answer+1;
    cout<<least<<endl;
    cout<<pi<<endl;
}