#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0;
    int d=100*a+10*b+c;
    int input;
    cin>>input;
    while (d!=input)
    {
        c=c+1;
        if (c>=10)
        {
            b=b+1;
            c=0;
        }
       
        if (b>=10)
        {
            a=a+1;
            b=0;
        }
        d=100*a+10*b+c;
    }
    int updown=100*c+10*b+a;
    cout<<updown<<endl;
}