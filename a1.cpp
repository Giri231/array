#include<iostream>
using namespace std;

int main()
{
    int a[5],i,n,l;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    cout<<"enter element and location ";
    cin>>n>>l;
    for(i=n;i<=4;i++)
    {
        a[i+1]=a[i];

    }
    a[l]=n;
    for(i=0;i<=4;i++)
    {
        cout<<a[i];
    }
}
