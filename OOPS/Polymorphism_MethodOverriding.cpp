#include<iostream>
using namespace std;

class Mobile {
public:
    virtual void generalscreensize() {   // <-- virtual for polymorphism
        cout << "general screensize is 4 inches\n";
    }
};

class SamsungScreenSize : public Mobile {
public:
    void generalscreensize() override {  // <-- overriding the base class method
        cout << "Samsung screensize is 5 inches\n";
    }
};

int main() {
    Mobile* m;                // Base class pointer
    SamsungScreenSize s;
    m = &s;                  // Pointing to derived class object

    m->generalscreensize();  // <-- Calls SamsungScreenSize version (runtime polymorphism)
}
