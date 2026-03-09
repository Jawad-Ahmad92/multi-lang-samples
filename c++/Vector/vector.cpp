// vector--> is like array but is sixe is dynaic any time can changeble
// syntax 1-->  vector<data_type>vector_name
// syntax 2-->  vector<data_type>name={1,2,3}
// syntax 3-->  vector<dattype>vec_name(3,0);1 no show size of vector , and 2 number show value on any index

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3};
    cout << vec[0] << endl; // they print 1 becuz on zero index value is 1;

    vector<int> vec_2(3, 0);
    // cout << vec_2[2] << endl; // they print 0 becuz on any index value is 0;

    return 0;
}