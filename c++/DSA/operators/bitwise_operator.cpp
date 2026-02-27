#include <iostream>
using namespace std;

int main()
{
    int a, b, choice;
    cout << "enter your first integer: ";
    cin >> a;
    cout << "enter your second integer: ";
    cin >> b;

    cout << "\nbitwise & click: 1" << endl;
    cout << "bitwise | click: 2" << endl;
    cout << "bitwise ^ (XOR) click: 3" << endl;
    cout << "bitwise << (left shift operator)  click: 4" << endl;
    cout << "bitwise >> (Right shift operator)  click: 5" << endl;

    cout << "enter your choice :";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "bitwise & operator:" << (a & b) << endl;
        break;

    case 2:
        cout << "bitwise | operator:" << (a | b) << endl;
        break;

    case 3:
        cout << "bitwise ^ (XOR) operator:" << (a ^ b) << endl;
        break;

    case 4:
        cout << "Bitwise left shift (a << 1): " << (a << 1) << endl; // they take only first number value
        break;                                                       // formula is (a<<n= a*(2^n))

    case 5:
        cout << "Bitwise Right shift (a >> 1): " << (a >> 1) << endl; // they take only first number value
        break;                                                        // formula is (a>>n= a/(2^n))

    default:
        cout << "invalid choice " << endl;
    }

    return 0;
}