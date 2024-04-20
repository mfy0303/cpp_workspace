#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int p=2;
    int n;
    cin>>n;
    while ((p>=2)&&(p<=n))
    {
        int pm=0;
        for (int i=1;i<p;++i)
        {
            if (p%i==0)
            {
                pm=pm+i;
            }
        }
        if (pm==1)
        {
            cout<<p<<endl;
            p=p+1;
        }
        else
        {
            p=p+1;
        }
    }
}