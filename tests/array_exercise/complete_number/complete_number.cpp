#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int c=2;
    while ((c>=2)&&(c<=100))
    {
        int cm=c;
        for (int i=1;i<c;++i)
        {
            if (c%i==0)
            {
                cm=cm-i;
            }
        }
        if (cm==0)
        {
            cout<<c<<endl;
            c=c+1;
        }
        else
        {
            c=c+1;
        }
    }
}