#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double w=abs(x1-x2);
    double h=abs(y1-y2);
    double l=sqrt(pow(w,2)+pow(h,2));
    printf("%-100.3f",l);
    return 0;
}