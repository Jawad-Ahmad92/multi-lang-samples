#include <iostream>
using namespace std;
class text
{
	int x;

public:
	friend int in(text &t);
	friend int out(text &t);
};
int in(text &t)
{
	cout << "enter value ";
	cin >> t.x;
}
int out(text &t)
{
	cout << "x value is " << t.x << endl;
}
int main()
{
	text ob;
	in(ob);
	out(ob);

	return 0;
}
