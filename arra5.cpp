#include<iostream>

using namespace std;

int main()
{
    int a[5],i,t,n;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    cout<<"enter no of times to rotate an array";
    cin>>n;
    while(n>0){
    for(i=0;i<=4;i++)
    {
        t=a[0];
        a[0]=a[i];
        a[i]=t;
    }n--;
    }
    for(i=0;i<=4;i++)
    {
        cout<<a[i];
    }
}
