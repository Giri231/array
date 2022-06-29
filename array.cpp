
#include<iostream>

using namespace std;

int main()
{
    int a[5],i,j,t;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=3;i++)
    {
        d=c;

        while(t<a[j]&&j>=0){
            a[j+1]=a[j];
            j=j-1;
        }
    }
    a[j+1]=t;


cout<<"Insertion sorted array";
for(i=0;i<=4;i++)
{
    cout<<a[i];
}
}
