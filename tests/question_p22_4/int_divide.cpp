#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"输入两个整数a,b,你将得到它们的商与余数"<<endl;
    cin>>a>>b;
    while (b==0)
    {
        cout<<"除数不能为0,请重新输入"<<endl;
        cin>>a>>b;
    }
    int answer=a/b;
    int rest=a-answer*b;
    cout<<"商是"<<answer<<","<<"余数是"<<rest<<endl;
}