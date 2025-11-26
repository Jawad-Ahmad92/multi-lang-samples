
  /* this is a friend function program the friend function is used for access  class private data syntax is -->
     (freind datatype fun_name(class A, class B));
      
This program has two classes A and B.
Each class has a private variable:
Class A → x = 10
Class B → n = 15
Because these variables are private, normally they cannot be accessed outside.
r = obj_a.x + obj_b.n;
It reads A’s x and B’s n, then prints:
value of A
value of B
sum of both
In main(), objects obj1 and obj2 are created and passed to show().
  */
#include<iostream>
using namespace std;
class B;
class A{
    private:
    int x;
    public:
    A(){
        x=10;
    }
    friend int show(A,B);
};
class B{
    private:
    int n;
    public:
    B(){
    n=15;
    }
    friend int show(A,B);
};
int show(A obj_a , B obj_b){
    int r;
    r=obj_a.x+obj_b.n;
    cout<<"the value of class A is:"<<obj_a.x<<endl;
    cout<<"the value of class B is:"<<obj_b.n<<endl;
    cout<<"the sum oof both value are:"<<r<<endl;
}
int main(){
    A obj1;
    B obj2;
    show(obj1,obj2);

    return 0;
}