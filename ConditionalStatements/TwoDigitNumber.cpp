#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if((a>9 && a<100)||(a>-100 && a<=-10))
        cout<<"Yes";
    else
        cout<<"No";
}