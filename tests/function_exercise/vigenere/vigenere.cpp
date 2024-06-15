#include<cstdio>
#include<iostream>
#include <cstring>
using namespace std;
char break_code(char a,char b)
{
    char r;
    if (b == 'a')
    {
       r=a; 
    }
    if (b == 'b')
    {
        r=a+1;
    }
    if (b == 'c')
    {
        r=a+2;
    }
    return r;
}
int main()
{
    char a='a';
    char b='b';
    char c='c';
    char topublic[1001];
    char toprivate[1001];
    cin.getline(toprivate,1000);
    for (int i=0;i<1000;i++)
    {
        if (a=='d')
        {
            a='a';
        }
        topublic[i]=break_code(toprivate[i],a);
        a=a+1;
    }
    cout<<topublic<<endl;
    return 0;
}
