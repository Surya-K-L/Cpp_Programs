#include<iostream>
using namespace std;
int main()
{
    int n,t=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    t=a[0]+a[n-1];
    cout<<t<<"\n";
    if(t%2==0)
        cout<<"EVEN";
    else
        cout<<"ODD";
}