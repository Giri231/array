#include<iostream>
using namespace std;


int main()
{
    int a[100] = {3,2,1,8,11};
    int pos,num,i;
    cout<<"Print the pos and no";
    cin>>pos>>num;
    for(i=4;i>=pos;i--)
        a[i+1]=a[i];
    a[pos]=num;
    cout<<"now array";
    for(i=0;i<6;i=i+1)
        cout<<a[i];
}
