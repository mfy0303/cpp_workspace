#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if (x>y)
    {
        cout<<">"<<endl;
    }
    if (x==y)
    {
        cout<<"="<<endl;
    }
    if (x<y)
    {
        cout<<"<"<<endl;
    }
    return 0;
    
}