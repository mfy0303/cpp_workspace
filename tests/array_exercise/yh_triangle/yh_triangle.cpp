#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a[11][11];
    a[1][1]=1;
    for (int i=2;i<=10;++i)
    {
        a[i][1]=1;
        a[i][i]=1;
        for (int j=2;j<=i-1;++j)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    cout<<a[10][3]<<endl;
}