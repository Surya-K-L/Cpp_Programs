#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    do{
        cout<<n<<" ";
        n=n-k;
    }while(n>=0);
}