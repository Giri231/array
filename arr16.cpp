
#include<iostream>
using namespace std;

int main()
{
    for(i=0;i<=4;i++)

    {
        cin>>a[i];
    }
    for(i=0;i<=4;i++)
    {
        if(a[i]<0)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            j++;
        }
    }
    for(i=0;i<=4;i++)
    {
        cout<<a[i];
    }
}
