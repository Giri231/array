#include<iostream>

using namespace std;

int main()
{
    int a[5],i,t;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];

    }
    for(i=0;i<=4;i++)
    {
        if(a[i]>a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    for(i=0;i<=5;i++)
    {
        cout<<a[i];
    }
}
