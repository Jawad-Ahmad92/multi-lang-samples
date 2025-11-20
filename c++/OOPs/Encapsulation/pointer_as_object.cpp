#include <iostream>
using namespace std;

class Student {
public:
    string name;
    void display() {
        cout << "Name: " << name << endl;
    }
};

// Function takes pointer to object
void show(Student *ptr) {
    ptr->display();   // Use -> to access members
}

int main() {
    Student obj;
    obj.name = "Jawad";

    show(&obj);  // Pass address of object
}
