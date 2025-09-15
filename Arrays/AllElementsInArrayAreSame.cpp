#include<iostream>
using namespace std;
int main()
{
    int n,t=0,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    t=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            c++;
        }
    }
    if(c==n)
        cout<<"YES";
    else
        cout<<"NO";
}
