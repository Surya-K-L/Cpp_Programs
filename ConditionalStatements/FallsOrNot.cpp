#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    if(b<a && b>-a)
        cout<<b<<" falls between "<<-a<<" to "<<a;
    else
        cout<<b<<" does not fall between "<<-a<<" to "<<a;
        
}