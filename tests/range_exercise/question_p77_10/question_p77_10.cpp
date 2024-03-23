#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int coin=0;
    int n;
    int i=1;
    int day=1;
    cin>>n;
    while(day<n)
    {
        i+=1;
        day+=i;
    }
   for(int a=1;a<=i;++a)
   {
        coin+=a*a;
   }
   if (day>n)
   {
    coin=coin-(day-n)*i;
   }
    cout<<coin;
}