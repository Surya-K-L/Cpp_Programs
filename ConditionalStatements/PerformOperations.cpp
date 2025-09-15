#include <iostream>
using namespace std;
int main()
{
    char a;
    int b;
    cin>>a;
    cin>>b;
    if((b>=1 && b<=10) && (a>='A' && a<='C'))
        cout<<"ALPHA";
    else if((b>=11 && b<=30) && (a>='D' && a<='R'))
        cout<<"BETA";
    else if((b>=1 && b<=10) && (a>='D' && a<='R'))
        cout<<"GAMMA";
    else if((b>=11 && b<=30) && (a>='A' && a<='C'))
        cout<<"DELTA";
    else
        cout<<"OMEGA";

}