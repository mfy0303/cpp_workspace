#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    int a=(int)x;
    if (a%2==1)
    {
        cout<<"odd"<<endl;
    }
    if (a%2==0)
    {
        cout<<"even"<<endl;
    }
    return 0;
}