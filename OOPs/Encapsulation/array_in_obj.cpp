#include <iostream>
using namespace std;

class student {
private:
    int marks[5];
    float sum, avg;

public:
    // Constructor to initialize values
    student() {
        sum = 0;
        avg = 0;
    }

    // Function to input marks
    void get_marks() {
        for (int i = 0; i < 5; i++) {
            cout << "Enter your marks: ";
            cin >> marks[i];
            sum += marks[i];
        }
        avg = sum / 5.0; // ensure float division
        cout << endl;
    }

    // Function to display all data
    void display() {
        int max = marks[0];
        int min = marks[0];

        cout << "Student marks:\n";
        for (int j = 0; j < 5; j++) {
            if (marks[j] > max)
                max = marks[j];
            if (marks[j] < min)
                min = marks[j];
            cout << "Mark " << j + 1 << " = " << marks[j] << endl;
        }

        cout << "\nSum = " << sum;
        cout << "\nAverage = " << avg;
        cout << "\nMaximum = " << max;
        cout << "\nMinimum = " << min << endl;
    }
};

int main() {
    student s1;
    s1.get_marks();
    s1.display();

    return 0;
}

