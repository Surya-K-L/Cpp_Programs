#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a==17 ||a==33)
        cout<<"boundary";
    else if(a>17 && a<33)
        cout<<"YES";
    else
        cout<<"NO";
}
