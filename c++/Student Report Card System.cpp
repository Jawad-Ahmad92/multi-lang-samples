#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int rollno;
    int marks[5];
    int sum = 0;
    double percentage;

public:
    int set(string n, int r, int m, int s, double per)
    {
        name = n;
        rollno = r;
        marks[5] = m;
        sum = s;
        percentage = per;
    }

    int input();
    int output();
};
int student::input()
{
    cout << "enter you name:";
    getline(cin, name);
    cout << "enter student class number:";
    cin >> rollno;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter your marks:" << endl;
        cin >> marks[i];
        sum += marks[i];
    }
    percentage = sum / 5.0;
}
int student::output()
{
    cout << "student name is: " << name << endl;
    cout << "student class number is:" << rollno << endl;
    cout << "total marks of the student is: " << sum << endl;
    cout << "percentage of the student marks is :" << percentage << endl;
}
int main()
{
    student s1;

    s1.input();
    s1.output();

    return 0;
}