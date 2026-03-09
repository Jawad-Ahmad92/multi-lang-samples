#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    // nested loops --> O(n^2)
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }

    cout << "Number of duplicate pairs: " << count << endl;
    return 0;
}

/*
Explanation:
- Two loops, each can go up to n → n * n = n^2 iterations
- Time complexity = O(n^2)
- Space complexity = O(1), only variables n, arr[], i, j, count used
*/