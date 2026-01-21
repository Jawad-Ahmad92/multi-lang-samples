// --------------------------------------------------------
// Function Overloading Example in C++
// Author: Jawad Ahmad
// Description: Demonstrates function definition, calling,
//              and overloading (same function name, different parameters)
// --------------------------------------------------------

#include <iostream>
using namespace std;

// define the hello function  --> this function called without parameter

int hello()
{
   cout << "hello from jawad! " << endl;
}

// define another function sum this function is called -->function with parameter
int sum(int num1, int num2)
{
   int s = num1 + num2;
   cout << "sum is:" << s << endl;
}

// define another function with same name this is called --> function overloading but diffrence in parameter
int sum()
{
   int x, y, i; // initialize value for using
   cout << "enter first integer: ";
   cin >> x; // take value from user
   cout << "enter second value :";
   cin >> y; // take second value

   // use oprator
   i = x + y;
   cout << "sum of the value is: " << i << endl;
}

// how to call the function?

int main() // main function called
{
   hello(); // output is--> hello from jawad

   sum(5, 9); // there are parameter so it first sum function output is--> 14

   sum(); // this is second function sum so they take first value from user a find sum of the values

   return 0;
}