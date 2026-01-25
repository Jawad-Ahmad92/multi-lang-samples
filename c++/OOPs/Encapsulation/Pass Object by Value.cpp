/* Pass by Value
void func(ClassName obj)
Makes a copy of the object*/
#include <iostream>
using namespace std;

class Student
{
    int age;

public:
    void setAge(int a)
    {
        age = a;
    }

    void showAge()
    {
        cout << "Age = " << age << endl;
    }

    void display(Student s)
    { // <-- object passed by value
        cout << "Displaying age of another student: " << s.age << endl;
    }
};

int main()
{
    Student s1, s2;
    s1.setAge(20);
    s2.setAge(25);

    s1.display(s2); // Passing object s2 to function display()

    return 0;
}
