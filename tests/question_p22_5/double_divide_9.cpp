#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"输入两个整数，求其商(保留9位小数)"<<endl;
    cin>>a>>b;
    while (b==0)
    {
        cout<<"除数不能为0,请重新输入"<<endl;
        cin>>a>>b;
    }
    double c=(double)a/(double)b;
    printf("%-100.9f",c);
}