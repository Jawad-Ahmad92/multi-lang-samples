#include <iostream>
using namespace std;

int main()
{
    int ans = 0, power = 1, reminder, decimal_no;

    cout << "enter a dicimal number: ";
    cin >> decimal_no;

    int original = decimal_no; // they store the orignal decimal number becuse if we ..
                               //  used after loop so they give to him 0 so therfore before the loop we store ot another variable

    while (decimal_no > 0) // while loop for code will be run to the decimal number equall to zero
    {
        reminder = decimal_no % 2;
        decimal_no = decimal_no / 2;

        ans += (reminder * power);
        power = power * 10;
    }
    cout << original << " in Binary is: " << ans << endl;

    return 0;
}