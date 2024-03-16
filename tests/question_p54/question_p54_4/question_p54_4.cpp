#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int w;
    int m;
    int t=0;
    int choice;
    cout<<"请输入信件重量(g)"<<endl;
    cin>>w;
    t=(w-1000)%500;
    if (w<=1000)
    {
        m=8;
    }
    if (w>1000)
    {
        if (t==0)
        {
            m=(w-1000)/500*4+8;
        }
        else
        {
            m=(w-1000+500-t)/500*4+8;
        }
    }
    cout<<"邮寄方式:"<<endl;
    cout<<"1.普通邮寄"<<endl;
    cout<<"2.加急邮寄"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1: cout<<m<<endl;break;
        case 2: m=m+5; cout<<m<<endl;break;
        default: cout<<"输入错误"<<endl;break;
    }
    cout<<t<<endl;
    return 0;
}