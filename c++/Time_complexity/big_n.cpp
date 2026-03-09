/*
O(n) --> big O of n --> linear
we use this when memory or time grows linearly with input n
like using a loop over n elements
example: find sum of numbers from 1 to n using loop
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n value: ";
    cin >> n;

    int sum = 0;

    // loop runs n times --> memory still O(1), time O(n)
    for (int i = 1; i <= n; i++)
    {
        sum += i; // sum = sum + i
    }

    cout << "sum: " << sum << endl;

    return 0;
}

/*
Explanation:
- Here, we used a loop that runs n times
- Each iteration does a constant operation
- So time complexity = O(n) --> linear with input size
- Space complexity = O(1) because only variables sum and i are used
*/