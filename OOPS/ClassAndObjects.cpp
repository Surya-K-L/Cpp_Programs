#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int price;

    void display() {
        cout << "Brand: " << brand << ", Price: " << price << endl;
    }
};

int main() {
    
    Car car1;   
    car1.brand = "Toyota";
    car1.price = 500000;
    car1.display();   
    
    
    Car car2;
    car2.brand = "BMW";
    car2.price = 2000000;
    car2.display();

    return 0;
}
