//function overridding-->>the same name , same parameter in diffrent class function but its call by class object.
//  in function overiding have must inheritence .

#include<iostream>
using namespace std;
class parent{
    public:

    int show(){
        cout<<"this is parent class function "<<endl;
    }
       //virtual function run in run time in inheritence

    virtual int hello(){
        cout<<"hello from parent class "<<endl;
    }

};

      //inheritence
class child:public parent{
    public:
    int show(){
        cout<<"this is child class function"<<endl;
    }

    virtual int hello(){
        cout<<"hello from child class "<<endl;
    }
};

int main()
{
    parent p;  //parent class object
    child c;   //child class object

    p.show();   //this is parent class function call becuase ther is parent class object denoted by "p"
    p.hello();  //this is parent class virtual function 
    
    c.show();   //this is child class function call becuase ther is child class object denoted by "c"
    c.hello();  //this is chi ld class virtual function
    
    
    return 0;
}