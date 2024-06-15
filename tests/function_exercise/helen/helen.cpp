#include<cstdio>
#include<iostream>
#include <cstring>
#include<math.h>
using namespace std;
double helen(double a,double b,double c)
{
    double p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double h=helen(a,b,c);
    cout<<h;
    return 0;

}