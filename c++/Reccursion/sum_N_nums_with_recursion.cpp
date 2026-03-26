#include <iostream>
using namespace std;

int sum_n_num(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sum_n_num(n - 1);
}

int main()
{
    cout << "sum of n number is :" << sum_n_num(4);

    return 0;
}