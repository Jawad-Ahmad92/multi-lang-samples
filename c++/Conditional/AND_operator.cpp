#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cout << "enter first integer:" << endl;
    cin >> a;
    cout << "enter second integer:" << endl;
    cin >> b;
    cout << "enter third integer:" << endl;
    cin >> c;
    cout << "enter four integer:" << endl;
    cin >> d;
    cout << "enter five integer:" << endl;
    cin >> e;
    cout << "enter sixth integer:" << endl;
    cin >> f;

    cout << "the greatest value is :" << endl;
    if (a > b && a > c && a > d && a > e && a > f)
    {
        cout << "first ineger is greatest number:" << a << endl;
    }
    else if (b > a && b > c && b > d && b > e && b > f)
    {
        cout << "second integer is greatest:" << b << endl;
    }
    else if (c > a && c > b && c > d && c > e && c > f)
    {
        cout << "third integer is greatest:" << c << endl;
    }
    else if (d > a && d > b && d > c && c > e && c > f)
    {
        cout << "fourth is greatest:" << d << endl;
    }
    else if (e > a && e > b && e > c && e > d && e > f)
    {
        cout << "five is greatest:" << e << endl;
    }
    else
    {
        cout << "sixth integer is greatest:" << f << endl;
    }

    return 0;
}