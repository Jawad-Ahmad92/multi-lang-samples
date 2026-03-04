#include <iostream>
using namespace std;
int main()
{
    int marks[5];

    for (int i = 0; i <= 4; i++)
    {
        cout << "enter your  values:";
        cin >> marks[i];
    }

    for (int i = 0; i <= 4; i++)
    {
        cout << "value is:" << marks[i] << endl;
    }

    return 0;
}