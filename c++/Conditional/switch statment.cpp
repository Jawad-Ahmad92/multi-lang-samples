#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter a number for week name";
	cin >> n;
	switch (n)
	{
	case 1:
		cout << "monday";
		break;
	case 2:
		cout << "tuesday";
		break;
	case 3:
		cout << "wednesday";
	case 4:
		cout << "tursday";
	case 7:
		cout << "friday";
		break;
	case 5:
		cout << "saturday";
		break;
	case 6:
		cout << "sunday";
		break;
	default:
		cout << "invalid number";
		break;
	}

	return 0;
}
