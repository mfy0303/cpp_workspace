#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float s;
    cin>>s;
    float tb=s/3+23+27;
    float tw=s/1.2;
    if (tb>tw)
    {
        cout<<"Walk"<<endl;
    }
    if (tb<tw)
    {
        cout<<"Bike"<<endl;
    }
    if (tb==tw)
    {
        cout<<"All"<<endl;
    }
    return 0;
}


