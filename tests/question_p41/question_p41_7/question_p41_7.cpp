#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a1,a2;
    cout<<"please input the first two numbers of the list"<<endl;
    cin>>a1>>a2;
    int n;
    cout<<"input n"<<endl;
    cin>>n;
    int dif=a2-a1;
    int answer=a1+dif*(n-1);
    cout<<answer<<endl;
    return 0;
}