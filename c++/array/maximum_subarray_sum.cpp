#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    int max_sum = INT_MIN;

    for (int start = 0; start < n; start++)
    {
        int current_sum = 0;

        for (int end = start; end < n; end++)
        {
            current_sum += arr[end];

            if (current_sum > max_sum)
            {
                max_sum = current_sum;
            }
        }
    }

    cout << "Maximum subarray sum is: " << max_sum << endl;

    return 0;
}