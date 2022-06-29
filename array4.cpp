#include<iostream>

using namespace std;

int main()
{
    int a[5]={14,81,100,4,3},max;
    max=a[0];
    for(int i=1;i<5;i=i+1)
    {
        if(max<a[i])
            max=a[i];
    }

}
