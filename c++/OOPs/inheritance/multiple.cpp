#include <iostream>
using namespace std;
class person
{
public:
    string name;
    int age;
    int get_perso()
    {
        cout << "enter your name:";
        cin >> name;
        cout << "enter your age: ";
        cin >> age;

        return 0;
    }
    int show_person()
    {
        cout << "user name is:" << name << endl;
        cout << "user age is :" << age << endl;

        return 0;
    }
};
class student : virtual person
{
public:
    int roll_num;
    string program;

    int get_student()
    {
        cout << "enter your roll number:";
        cin >> roll_num;
        cout << "enter your subject:";
        cin >> program;

        return 0;
    }
    int show_student()
    {
        cout << "your roll number is:" << roll_num << endl;
        cout << "your acadimic subject is:" << program << endl;

        return 0;
    }
};

class employe : virtual person
{
public:
    int employe_id;
    double salary;

    int get_employe()
    {
        cout << "enter your ID:";
        cin >> employe_id;
        cout << "enter your salary:";
        cin >> salary;

        return 0;
    }

    int show_employe()
    {
        cout << "your id is:" << employe_id << endl;
        cout << "your salary is:" << salary << endl;
        return 0;
    }
};

class Teacher_assistent : public student, public employe
{
public:
    int get_techerassistence()
    {
        Teacher_assistent obj;
        obj.get_employe();
        obj.get_student();
        return 0;
    }
    int show_teacherassistence()
    {
        Teacher_assistent obj;
        obj.show_employe();
        obj.show_student();
        return 0;
    }
};
int main()
{
    Teacher_assistent obj1;
    obj1.get_techerassistence();
    cout << "/nteaching assistent details:" << endl;
    obj1.show_teacherassistence();

    return 0;
}

// virtual-->Virtual inheritance ensures that only one copy of the base class is shared among all derived classes in multiple inheritance.