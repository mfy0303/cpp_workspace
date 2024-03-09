#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int math,chinese;
    cin>>math>>chinese;
    if ((math<=100)||(chinese<=100)||(math>=0)||(chinese>=0))
    {
        if ((math<=60)&&(chinese<=60))
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    else
    {
        cout<<"the score is too large or too small"<<endl;
    }
}