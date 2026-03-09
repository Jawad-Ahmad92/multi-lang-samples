// vector function -- is used for delate ,update, size etc in vector

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vac_3 = {2, 4, 5, 7, 8, 34, 75, 86, 23};
    // vector_name.size()  --> they show size  of that vector
    cout << "size of vec_3 is: " << vac_3.size() << endl; // they print 9 becuzz his size is 9
    cout << "capacity of vec_3 is: " << vac_3.capacity() << endl;

    // v_name.push_back(value that you add)  --> add element in last
    vac_3.push_back(3);
    cout << "size of vec_3 after push back: " << vac_3.size() << endl; // they print 10 becuzz his size is 9 +1

    // v_name.pop_back()  --> delet of last element
    vac_3.pop_back();
    cout << "size of vec_3 after pop/delete back: " << vac_3.size() << endl; // they print 9 becuzz his size is 10 -1

    // front()--> we want print first value of vector
    cout << "front of val_3 is :" << vac_3.front() << endl; // they print 2 becz first value is 2

    // back()--> we want print first value of vector
    cout << "back of val_3 is :" << vac_3.back() << endl; // they print 23 last value is 23

    // at(index number) -->at used for print a particular number
    cout << "at of val_3 is :" << vac_3.at(3) << endl; // they print 7 becx on index 3 value is 7;
    cout << "capacity of vec_3 is: " << vac_3.capacity() << endl;

    return 0;
}