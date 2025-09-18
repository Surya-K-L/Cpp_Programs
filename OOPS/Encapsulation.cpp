#include<iostream>
using namespace std;
class Mobile{
    private:
        string model;
        int price;
        
    public:
        void setModel(string m,int p)
        {   
            model=m;
            price=p;
        }
        string getModel()
        {
            return model;
        }
        int getPrice()
        {
            return price;
        }
};

int main()
{
    Mobile mb;
    mb.setModel("Samsung",25000);
    cout<<mb.getModel()<<" "<<mb.getPrice();
}
