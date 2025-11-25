#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    void properties() {
        cout << "\n=== Animal Properties ===" << endl;
        cout << " - They can move." << endl;
        cout << " - They need food to live." << endl;
        cout << " - They can respond to the environment." << endl;
    }
};

// Derived Class 1
class Dog : public Animal {
public:
    void dogProperties() {
        cout << "\n=== Dog Properties ===" << endl;
        cout << " - Sound: Bark" << endl;
        cout << " - Food: Meat & dog food" << endl;
        cout << " - Nature: Loyal and friendly" << endl;
        cout << " - Ability: Good smell detection" << endl;
    }
};

// Derived Class 2
class Lion : public Animal {
public:
    void lionProperties() {
        cout << "\n=== Lion Properties ===" << endl;
        cout << " - Sound: Loud Roar" << endl;
        cout << " - Food: Only Meat" << endl;
        cout << " - Nature: Strong and dangerous" << endl;
        cout << " - Ability: Excellent hunter" << endl;
    }
};

// Derived Class 3
class Cat : public Animal {
public:
    void catProperties() {
        cout << "\n=== Cat Properties ===" << endl;
        cout << " - Sound: Meow" << endl;
        cout << " - Food: Milk, fish, meat" << endl;
        cout << " - Nature: Playful and curious" << endl;
        cout << " - Ability: Silent movement" << endl;
    }
};

// Derived Class 4
class Bird : public Animal {
public:
    void birdProperties() {
        cout << "\n=== Bird Properties ===" << endl;
        cout << " - Sound: Chirping" << endl;
        cout << " - Food: Seeds, fruits, insects" << endl;
        cout << " - Nature: Harmless and peaceful" << endl;
        cout << " - Ability: Can fly" << endl;
    }
};

// Multilevel (Eagle → Bird → Animal)
class Eagle : public Bird {
public:
    void eagleProperties() {
        cout << "\n*** Eagle Properties ***" << endl;
        cout << " - Sound: Scream" << endl;
        cout << " - Food: Meat, fish" << endl;
        cout << " - Nature: Strong and sharp" << endl;
        cout << " - Ability: High-speed flying, sharp vision" << endl;
    }
};

int main() {
    int choice;

    cout << "**** Animal Information Menu ****=" << endl;
    cout << "1. Animal (General)" << endl;
    cout << "2. Dog" << endl;
    cout << "3. Lion" << endl;
    cout << "4. Cat" << endl;
    cout << "5. Bird" << endl;
    cout << "6. Eagle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    // Creating objects
    Animal a;
    Dog d;
    Lion l;
    Cat c;
    Bird b;
    Eagle e;

    // cout<<"////----------////"<<endl;

    switch (choice) {
        case 1:
            a.properties();
            break;
        case 2:
            d.properties();
            d.dogProperties();
            break;
        case 3:
            l.properties();
            l.lionProperties();
            break;
        case 4:
            c.properties();
            c.catProperties();
            break;
        case 5:
            b.properties();
            b.birdProperties();
            break;
        case 6:
            e.properties();
            e.birdProperties();
            e.eagleProperties();
            break;
        default:
            cout << "Invalid Choice! Please enter a number from 1 to 6." << endl;
    }

    return 0;
}
