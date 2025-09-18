#include<iostream>
using namespace std;
class Add{
    public:
        int add(int a,int b)
        {
            return a+b;
        }
        float add(float a ,float b)
        {
            return a+b;
        }
        string add(string a,string b)
        {
            return a+b;
        }
};

int main()
{
    Add ad;
    cout<<ad.add(2,4)<<"\n";
    cout<<ad.add(1.3f,4.5f)<<"\n";
    cout<<ad.add("My name is ","Surya");
}
