#include <iostream>
using namespace std;

int linera_search(int arr[], int size, int target)
{

    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int target; // target--> we find target value and his index
    cout << "enter a target value: ";
    cin >> target;
    int size = 7;

    cout << linera_search(arr, size, target) << endl;
    // the output is 3 becuse there is in 3 index store 8 value

    return 0;
}