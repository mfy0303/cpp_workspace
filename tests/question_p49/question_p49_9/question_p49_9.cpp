#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if ((a%3==0)&&(a%5==0)&&(a%7==0))
    {
        cout<<"3"<<" "<<"5"<<" "<<"7"<<endl;
    }
    if (((a%3==0)&&(a%5==0))||((a%5==0)&&(a%7==0))||((a%3==0)&&(a%7==0)))
    {
        
    }
}