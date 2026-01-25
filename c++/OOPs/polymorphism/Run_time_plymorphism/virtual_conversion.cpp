#include <iostream>
using namespace std;

// Abstract Base Class for conversions
class Convert {
protected:
    double val1; // initial value
    double val2; // converted value
public:
    // Constructor to initialize initial value
    Convert(double i) {
        val1 = i;
    }

    // Function to get converted value
    double getConv() { return val2; }

    // Function to get initial value
    double getInit() { return val1; }

    // Pure virtual function → must be overridden in derived classes
    virtual void compute() = 0;
};

// Derived class: Liters to Gallons
class LToG : public Convert {
public:
    // Constructor calls base class constructor
    LToG(double i) : Convert(i) { }

    // Override compute function
    void compute() {
        val2 = val1 / 3.7854; // 1 gallon = 3.7854 liters
    }
};

// Derived class: Fahrenheit to Celsius
class FToC : public Convert {
public:
    // Constructor calls base class constructor
    FToC(double i) : Convert(i) { }

    // Override compute function
    void compute() {
        val2 = (val1 - 32) / 1.8; // Formula for Fahrenheit to Celsius
    }
};

int main() {
    Convert* p;      // Pointer to base class (for dynamic binding)
    
    LToG lgObj(4);   // Convert 4 liters to gallons
    FToC fcObj(70);  // Convert 70 Fahrenheit to Celsius

    // Use base class pointer to call derived class functions (virtual function mechanism)
    p = &lgObj;     
    cout << p->getInit() << " liters is ";
    p->compute();       // Calls LToG::compute()
    cout << p->getConv() << " gallons\n";

    p = &fcObj;
    cout << p->getInit() << " in Fahrenheit is ";
    p->compute();       // Calls FToC::compute()
    cout << p->getConv() << " Celsius\n";

    return 0;
}
