#include<iostream>

using namespace std;

int main()
{
    int a[5]={41,32,108,81,16},check,i;
    cout<<"enter element";
    cin>>check;
    for(i=0;i<5;i=i+1)
    {
        if(check==a[i])
            cout<<"found at location "<<i+1;
        break;
    }
}
