#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int* p= &a;
    int** ptr=&p;

    cout<<"*p is:"<<*p<<endl;  //in *p store A address and in A sttore a value the output is "10"

    cout<<"**ptr is :"<<**ptr<<endl;// thie double star is called derefrencing in pointer in
    //  *ptr -->store address of "*p" and double star mean what is store in the *p so there are address of a and the variable 
    // of store value "10" so the output is 10

    cout<<"p is:"<<p<<endl; // in the p store the address of the a

    cout<<"*ptr is:"<<*ptr<<endl; //in *ptr store address of the *p so the out put is address of the *p

    return 0;
}