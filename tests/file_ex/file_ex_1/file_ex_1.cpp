#include<cstdio>
#include<iostream>
#include <cstring>
#include<math.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int temp,sum=0;
    while(cin>>temp)
    {
        sum=sum-temp;
    }
    cout<<sum;
    fclose(stdin);fclose(stdout);
    return 0;
}