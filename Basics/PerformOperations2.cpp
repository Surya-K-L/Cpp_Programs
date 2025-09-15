#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"iNum1 & iNum2 is "<<(a&b)<<"\n";
    cout<<"iNum1 | iNum2 is "<<(a|b)<<"\n";
    cout<<"iNum1 ^ iNum2 is "<<(a^b)<<"\n";
    cout<<"iNum1 << iNum2 is "<<(a<<b)<<"\n";
    cout<<"iNum1 >> iNum2 is "<<(a>>b)<<"\n";
}