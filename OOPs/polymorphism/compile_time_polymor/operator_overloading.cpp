/*| Feature                  | Description                            |
| ------------------------ | -------------------------------------- |
| **Concept**              | Redefine operator behavior for objects |
| **Type of Polymorphism** | Compile-time (Static Binding)          |
| **Keyword**              | `operator`                             |
| **Example**              | `Complex operator+(Complex obj)`       |
*/

#include<iostream>
using namespace std;

class complex{
    public:
    int real,img;

    complex(int r=0,int i=0){
        real=r;
        img=i;
    }
          //overload the + operator
    complex operator+ (complex obj){
            complex temp;
            temp.real=real+obj.real;
            temp.img=img+obj.img;
            return temp;
    }
};

int main(){
    complex c1(4,10),c2(7,9);  //4+7=11 , 10+9=19
    complex c3=c1+c2;  // calls operator+()

    cout<<"sum: "<<c3.real<<"+"<<c3.img<<"i"<<endl;

    return 0;
}