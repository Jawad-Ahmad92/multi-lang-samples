#include <iostream>
using namespace std;

int binary_to_decimal()
{
    int binary_number, reminder, ans = 0, power = 1;
    cout << "enter a binary number :";
    cin >> binary_number;

    while (binary_number > 0)
    {
        reminder = binary_number % 10;
        binary_number /= 10;
        ans += reminder * power;
        power *= 2;
    }

    return ans;
}

int main()
{
    cout << binary_to_decimal();

    return 0;
}