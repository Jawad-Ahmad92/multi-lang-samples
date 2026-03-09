/*
O(1)--> big of O one .-->constant
we used that in those code we not used loops, recursion etc
only for constant code there we used simple formulas etc
eg: find sum of number 1 to n .
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n value: ";
    cin >> n;
    int sum = 0;

    sum = n * (n + 1) / 2; // formula of sum of 1 to n

    cout << "sum: " << sum << endl;

    return 0;
}

/*
so all code are constant there is no used loop etc
so O(k)--> k=constant and not used constant in time complexity
so we k =1
O(1)  ->>constant time complexity
*/