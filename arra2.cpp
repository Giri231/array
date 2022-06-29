#include<iostream>

using namespace std;

int main()
{
    int a[5],i,x,y;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    cout<<"enter element and enter loctaion" ;

    cin>>x>>y;
    for(i=4;i>=y;i--)
    {
        a[i+1]=a[i];
    }
    for(i=0;i<=5;i++)
    {
        cout<<a[i];
    }
}
