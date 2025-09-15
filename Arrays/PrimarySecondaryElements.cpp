#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;
    if(n!=m)
        cout<<"Row and column size should be same";
    else if(n<0 || m<0)
        cout<<"Row and column size should not be negative";
    else
    {
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Primary diagonal elements:\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==j)
                    cout<<a[i][j]<<"\n";
            }
        }
        cout<<"Secondary diagonal elements:\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i+j==n-1)
                    cout<<a[i][j]<<"\n";
            }
        }
    }
}