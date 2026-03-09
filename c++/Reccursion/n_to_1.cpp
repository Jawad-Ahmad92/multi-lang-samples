#include <iostream>
using namespace std;

// Function declaration
// printnums() will print numbers using recursion
void printnums(int n);

int main()
{
    // Function call
    // Start recursion with n = 4
    printnums(4);

    return 0;
}

void printnums(int n)
{
    // BASE CASE
    // When n becomes 1, stop recursion
    // Base case is necessary to stop infinite calls
    if (n == 1)
    {
        cout << "1\n"; // print last number
        return;        // stop function
    }

    // PRINT CURRENT VALUE
    // This prints the current number
    cout << n << " ";

    // RECURSIVE CALL
    // Function calls itself with smaller value
    // n decreases by 1 each time
    printnums(n - 1);
}