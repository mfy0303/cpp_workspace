#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,x3,y3;
    cout<<"please input the position of the first point"<<endl;
    cin>>x1>>y1;
    cout<<"please input the position of the second point"<<endl;
    cin>>x2>>y2;
    cout<<"please input the position of the third point"<<endl;
    cin>>x3>>y3;
    double w1=abs(x1-x2);
    double h1=abs(y1-y2);
    double a=sqrt(pow(w1,2)+pow(h1,2));
    double w2=abs(x2-x3);
    double h2=abs(y2-y3);
    double b=sqrt(pow(w2,2)+pow(h2,2));
    double w3=abs(x1-x3);
    double h3=abs(y1-y3);
    double c=sqrt(pow(w3,2)+pow(h3,2));
    double p=(a+b+c)*0.5;
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%-100.2f",s);
    return 0;
}