#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if ((a%3==0)&&(a%5==0)&&(a%7==0))
    {
        cout<<"3"<<" "<<"5"<<" "<<"7"<<endl;
    }
    else
    {
        if ((a%3==0)&&(a%5==0))
        {
            cout<<"3"<<" "<<"5"<<endl;
        }
        else
        {
            if ((a%3==0)&&(a%7==0))
            {
            cout<<"3"<<" "<<"7"<<endl;
            }
            else
            {
                if ((a%5==0)&&(a%7==0))
                {
                    cout<<"5"<<" "<<"7"<<endl;
                }
                else
                {
                    if (a%3==0)
                    {
                        cout<<"3"<<endl;
                    }
                    if (a%5==0)
                    {
                        cout<<"5"<<endl;
                    }
                    if (a%7==0)
                    {
                        cout<<"7"<<endl;
                    }
                    if ((a%7!=0)&&(a%5!=0)&&(a%3!=0))
                    {
                        cout<<"n"<<endl;
                    }
                }
            }
        }
    }
}