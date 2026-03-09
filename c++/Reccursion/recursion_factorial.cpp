#include <iostream>
using namespace std;

int n; // globel variale

int factorial(int n)
{

    if (n == 0)
    { // base case for fact
        return 1;
    }

    return n * factorial(n - 1); // formula of fact n*(n-1)!
}

int main()
{
    cout << "enter your value that you find factorial :";
    cin >> n;
    cout << "factorial :" << factorial(n) << endl;

    return 0;
}