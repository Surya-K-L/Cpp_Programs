#include<iostream>
using namespace std;
class Cooking{
    public:
        void makeBreadOmlet()
        {
             toastBread();
             fryEgg();
             platingFood();
             serveFood();
        }
    
    private: 
        void toastBread()
        {
            cout<<"Toast Bread until it becomes golden brown\n";
        }
        void fryEgg()
        {
            cout<<"Fry the egg in pan and add some salt to it\n";
        }
        void platingFood()
        {
            cout<<"Present the food in a arranged manner\n";
        }
        void serveFood()
        {
            cout<<"Serve the food to the customer";
        }
};

int main()
{
    Cooking co;
    co.makeBreadOmlet();
}
