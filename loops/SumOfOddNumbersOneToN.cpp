#include<iostream>
using namespace std;
int main()
{
    int n,t=0;
    cin>>n;
    for(int i=1;i<=n;i+=2)
    {
        t=t+i;
    }
    cout<<"Sum of Odd Numbers from 1 to "<<n<<": "<<t;
}