#include<iostream>

using namespace std;

int main()
{
    int a1[3][3],a2[3][3],i,j,sum[i][j];
    cout<<"first matrix values = ";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a1[i][j];
        }
    }
    cout<<"second matrix values = ";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a2[i][j];
        }
    }
    cout<<"sum of two matrix";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum[i][j]=a1[i][j]+a2[i][j];

        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<sum[i][j];
        }
        cout<<"\n";
    }

}
