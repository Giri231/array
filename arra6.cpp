#include<iostream>

using namespace std;

int main()
{
    int a[5],i,x,n;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    cout<<"enter loacation and enter element ";
    cin>>n>>x;
    for(i=4;i>=n;i--)
    {
        a[i+1]=a[i];
    }
    a[n]=x;
    for(i=0;i<=4;i++)
    {
        cout<<a[i];
    }
}
