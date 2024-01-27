#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,x,y;
    cout<<"箱子里有几个苹果？"<<endl;
    cin>>n;
    cout<<"虫子每几小时吃掉一个苹果？"<<endl;
    cin>>x;
    cout<<"虫子吃了几小时？"<<endl;
    cin>>y;
    int eat=y/x;
    if (eat*x == y)
    {
        eat=eat;
    }
    else
    {
        eat=eat+1;
    }
    int rest=n-eat;
    cout<<rest<<endl;


}