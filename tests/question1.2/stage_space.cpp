#include<cstdio>
#include<iostream>
using namespace std;
void mfy()
{
    cout<<"mfy"<<endl;
}
int main()
{
    int up_l = 15;
    int down_l = 25;
    int s_tri=150;
    int h = 2*s_tri/up_l;
    int s_stage=(up_l+down_l)*h/2;
    cout<<"s="<<s_stage<<endl;
    mfy();
    return 0;
}
