#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a<b && a<c)
        cout<<"L1 has minimum seating capacity";
    else if(b<a && b<c)
        cout<<"L2 has minimum seating capacity";
    else
        cout<<"L3 has minimum seating capacity";
}