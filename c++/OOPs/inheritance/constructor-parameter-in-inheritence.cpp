#include <iostream>
using namespace std;

class student
{
private:
    // Arrays must be class members, not parameters
    string name[100], address[100];

public:
    // Constructor receives two arrays correctly
    student(string n[100], string add[100])
    {
        // Copy all elements from n[] to name[]
        for (int i = 0; i < 100; i++)
        {
            name[i] = n[i];        
            address[i] = add[i];   
        }

        cout << "This is parent class constructor" << endl;
    }
};

class schoolinfo : public student
{
private:
    int rollno, marks;

public:
    // Constructor must receive arrays and pass them to parent
    schoolinfo(string n[100], string add[100], int roll, int mrk)
        : student(n, add)   // FIXED: Correct way to call parent constructor
    {
        rollno = roll; 
        marks = mrk;    

        cout << "This is child class constructor" << endl;
    }
};

int main()
{
    // We must create arrays before calling the constructor
    string names[100];
    string addresses[100];

    // Fill test values (optional)
    for (int i = 0; i < 5; i++) {
        names[i] = "Student Name " + to_string(i);
        addresses[i] = "Address " + to_string(i);
    }

    // Creating object with arrays + roll + marks
    schoolinfo s(names, addresses, 10, 95);

    return 0;
}
