#include<iostream>
using namespace std;
int main()
{
    int n,t=1;
    cin>>n;
    int k=n/2;
    for(int i=0;i<n;i++)
    {
        if(i<n/2)
        {
            cout<<k<<" ";
            k--;
        }
        else
        {
            cout<<-t<<" ";
            t++;
        }
    }
}
