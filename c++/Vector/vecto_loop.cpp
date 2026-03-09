// there we used "for each loop"
// syntax--> for(same_datatype_of vector i : vector_name)
//   they show the index value not index number

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec_1 = {1, 2, 3, 4};
    for (int value : vec_1)
    {
        cout << value << endl;
    } // they print 1,2,3,4

    return 0;
}