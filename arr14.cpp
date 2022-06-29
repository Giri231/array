#include<iostream>

using namespace std;

int main()
{
    int a1[3][3],a2[3][3],i,j;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a1[i][j];
        }

    }
    cout<<"transpose of a matrix";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            a2[i][j]=a1[j][i];
        }
    }
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<a2 [i][j];
        }
        cout<<"\n";
    }
}
