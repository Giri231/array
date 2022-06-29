#include<iostream>

using namespace std;

int main()

{
    int a[5]={5,2,8,16,3},pos,i;
    cin>>pos;
    for(i=pos;i<5;i=i+1)
        a[i]=a[i+1];
    for(i=0;i<4;i=i+1)
        cout<<a[i];
}
