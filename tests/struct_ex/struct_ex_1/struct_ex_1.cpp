#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    struct student_845
    {
        string name;
        int weight;
        int height;
        string hobby;
    };
    student_845 a[2];
    for (int i=0;i<2;i++)
    {
        cout<<"next one"<<endl;
        cin>>a[i].name;
        cin>>a[i].weight>>a[i].height;
        cin>>a[i].hobby;
    }
    freopen("out.txt","w",stdout);
    cout<<a;
    return 0;
}