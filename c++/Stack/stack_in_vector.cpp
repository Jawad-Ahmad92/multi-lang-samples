/*
    Stack is a linear data structure that follows:
    LIFO (Last In First Out)

    Means:
    - Last element inserted is removed first

    Example:
    Push: 10, 20, 30
    Stack becomes: [10, 20, 30]  (30 is top)
    Pop → removes 30 first
*/

#include <iostream>
#include <vector>
using namespace std;

class stack
{
private:
    vector<int> v; // vector used to store stack elements

public:
    // Push = add element at top
    void push(int val)
    {
        v.push_back(val);
    }

    // Pop = remove top element
    void pop()
    {
        v.pop_back();
    }

    // Top = get last element (top of stack)
    int top()
    {
        return v[v.size() - 1];
    }

    // Empty = check stack is empty or not
    int empty()
    {
        return v.size() == 0;
    }
};

int main()
{
    stack s; // create stack object

    // Adding elements
    s.push(10);
    s.push(20);
    s.push(30);

    // Printing and removing elements
    while (!s.empty())
    {
        cout << s.top() << " "; // print top element
        s.pop();                // remove top element
    }

    cout << endl;

    return 0;
}