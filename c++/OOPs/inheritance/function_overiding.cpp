#include <iostream>
using namespace std;

class Animal {
public:
    virtual void eat() {
        cout << "Animal eats food" << endl;
    }
};

class Cat : public Animal {
public:
    void eat() override {   // overriding
        cout << "Cat eats fish" << endl;
    }
};

int main() {
    Animal* a;     // base class pointer
    Cat c;

    a = &c;
    a->eat();      // Cat eats fish (because function is virtual)

    return 0;
}
