/*
  Reccursion --> A function call itself repeatedlly its cald reccursion
  and the end of calling ourself this stage called "base cause"

*/

#include <iostream>
using namespace std;

void abc(int n) // pass a parameter to track recursion
{
    if (n == 0)
    {
        cout << "it is base case";
        return; // base case: stop recursion
    }

    cout << "Recursion call: " << n << endl;

    abc(n - 1); // recursive call with smaller problem
}

int main()
{
    abc(5); // start recursion
    return 0;
}

/*  output
Recursion call: 5
Recursion call: 4
Recursion call: 3
Recursion call: 2
Recursion call: 1
it is base case
*/