#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c;
    float x1,x2;
    cin>>a>>b>>c;
    if (a!=0)
    {
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    }
    else
    {
        cout<<"error"<<endl;
    }
    printf("%-100.5f",x1);
    printf("%-100.5f",x2);
    return 0;
}