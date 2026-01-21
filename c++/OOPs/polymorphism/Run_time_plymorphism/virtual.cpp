#include <iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "this is base class member function " << endl;
    }
};

class derived : public base
{
public:
    void show()
    {
        cout << "this is derived class member function:" << endl;
    }
};
int main()
{
    base *ptr;
    derived obj;
    ptr = &obj;
    ptr->show();


    return 0;
}