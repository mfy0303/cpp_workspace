#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    struct scorelist
    {
       string name;
       int score;
    };
    scorelist a[3];
    int num[5]={22,222,11,54,24};
    sort(num+1,num+5);
    cout<<num[0];
    return 0;
}