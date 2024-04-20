#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    int input;
    cin>>input;
    while (input!=1)
    {
        if (input%2==0)
        {
            cout<<input<<endl;
            input=input/2;
        }
        else
        {
            cout<<input<<endl;
            input=3*input+1;
        }
    }
    cout<<"1"<<endl;
    return 0;
}