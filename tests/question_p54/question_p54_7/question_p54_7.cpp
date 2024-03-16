#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    int p=year%4;
    if (p==0)
    {
        cout<<"leap"<<endl;
    }
    else
    {
        cout<<"common"<<endl;
    }
}