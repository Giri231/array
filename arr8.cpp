#include<iostream>

using namespace std;

int main()
{
    int a[5],i;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
  int  max=a[0];
  int   min=a[0];
    for(i=0;i<=4;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<=4;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<max<<" "<<min;
}
