// void pointer--> they store any type of address can stor
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    float f = 23.6;
    char c = '@';

    void *ptr; //--> void pointer declaration

    ptr = &n; //--->define of void pointer for n
    cout << "the value of n is:" << n << endl;
    cout << "the address of n is:" << ptr << endl;

    ptr = &f; //--->define of void pointer for f
    cout << "the value of f is:" << f << endl;
    cout << "the address of f is:" << ptr << endl;

    ptr = &c; //--->define of void pointer for
    cout << "the value of c is:" << c << endl;
    cout << "the address of c is:" << ptr << endl;

    return 0;
}