#include<iostream>
using namespace std;
class Mobile{
    public:
        void generalscreensize()
        {
            cout<<"general screensize is 4 inches\n";
        }
};
class SamsungScreenSize:public Mobile{
    public:
        void screensize()
        {
            cout<<"Samsung screensize is 5 inches";
        }
};

int main()
{
    SamsungScreenSize s;
    s.generalscreensize();
    s.screensize();
}
