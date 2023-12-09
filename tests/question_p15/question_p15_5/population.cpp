#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    float x,a,y,b;
    cin>>x>>a>>y>>b;
    int cycle=0;
    while (cycle!=1)
    {
        if ((x<10000)&&(a<10000)&&(y<10000)&&(b<10000)&&(x>y)&&(a<b)&&(a*x<b*y))
        {
            cycle=1;
        }
        else
        {
            cout<<"Sorry,your input doesn't follow the requirement,please input again."<<endl;
            cin>>x>>a>>y>>b;
        }
    }
    float year=(b*y-a*x)/(b-a);
    cout<<year<<endl;
    return 0;
}