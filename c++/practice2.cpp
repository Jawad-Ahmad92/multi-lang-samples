#include <iostream>
#include <stack>
using namespace std;

#define Max 5

int stack[Max];
int Top = -1;

// push operation ---> insert value

void push(int x)
{
    if (Top == Max - 1)
    {
        cout << "stack is overflow " << endl;
    }
    else
    {
        Top++;
        stack[Top] = x;
        cout << "insert :" << x << endl;
    }
}

// pop operation -->remove from top

void pop()
{
    if (Top == -1)
    {
        cout << "stack is underflow" << endl;
    }
    else
    {
        cout << "delete :" << stack[Top] << endl;
        Top--;
    }
}

// peek operation -->see the top element without removing

void peek()
{
    if (Top == -1)
    {
        cout << "stack is empty:" << endl;
    }
    else
    {
        cout << "Top element:" << stack[Top] << endl;
    }
}

// display stack

void display()
{
    if (Top == -1)
    {
        cout << "stack is empty:" << endl;
    }
    else
    {
        cout << "stack elements:" << endl;
        for (int i = Top; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    peek();
    display();

    pop();
    pop();

    display();

    return 0;
}