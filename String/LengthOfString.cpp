#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    for(char k:s)
    {
        k=k;
        c++;
    }
    cout<<c;
}