/*  Pass by Reference
void func(ClassName &obj)
Uses the original object (no copy)*/ 
#include<iostream>
using namespace std;

class Student {
    int age;
public:
    void setAge(int a) {
        age = a;
    }

    void compare(Student &s) {  // <-- pass by reference
        if (age > s.age)
            cout << "Current student is older.\n";
        else
            cout << "Other student is older.\n";
    }
};

int main() {
    Student s1, s2;
    s1.setAge(22);
    s2.setAge(20);

    s1.compare(s2);  // Passing by reference

    return 0;
}

