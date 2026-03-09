/*
O(n^3) --> big O of n cubed --> cubic
used when there are three nested loops, each running n times
example: sum of all triplets from 1 to n
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n value: ";
    cin >> n;

    int totalSum = 0;

    // three nested loops --> n * n * n = n^3 operations
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                totalSum += (i + j + k); // add sum of each triplet
            }
        }
    }

    cout << "Total sum of all triplets: " << totalSum << endl;

    return 0;
}

/*
Explanation:
- Three loops, each runs n times → total n^3 iterations
- Time complexity = O(n^3) --> grows cubically with input size
- Space complexity = O(1) because only variables n, i, j, k, totalSum are used
- Common in algorithms checking all triplets (like brute-force 3-sum problem)
*/