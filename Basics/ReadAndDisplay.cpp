#include<iostream>
using namespace std;
int main()
{
    string name;
    int age,pro;
    double price;
    cin>>name;
    cin>>age;
    cin>>pro;
    cin>>price;
    cout<<"Name:  "<<name<<"\n";
    cout<<"Age:  "<<age<<"\n";
    cout<<"Product Quantity:  "<<pro<<"\n";
    printf("Price: %.2f",price);
}