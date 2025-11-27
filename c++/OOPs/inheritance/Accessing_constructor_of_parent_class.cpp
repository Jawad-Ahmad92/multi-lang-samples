          /*output
this is child class obj1 :
n= 0
char is =x

this is obj2 values 
n= 200
char is =@
*/

#include<iostream>
using namespace std;

class parent
{
    protected:
    int n;    //only accesible in chil class 
    public:
    parent(){  // parent class comstructor 
        n=0;
    }
    parent(int p){  //parent class 2nd constructor with parameter
        n=p;
    }

    int show(){     // display the n value direct to the parent class
        cout<<"n= "<<n<<endl;

        return 0;
    }
};
class child:public parent{   // this is child class that inherit or acces all member of parent class
    private:
    char ch;
    public:
    child():parent(){   // this is child class constructor they call the parent class constructor first
        ch='x';
    }
    child(char c , int m):parent(m){   // this is child class class 2nd constructor with parameter --> m=n
        ch=c;
    }
    int display(){  // this is show the value of ch in child class 
        cout<<"char is ="<<ch<<endl;

        return 0;
    }
};

int main()
{
    child obj1,obj2('@',200);
    
    cout<<"this is child class obj1 :\n";
    obj1.show();   //-->  this is direct call the actual value of the n in parent class -- n=0
    obj1.display();  //--> this is direct call the actual value of ch in child class--ch='x'

    cout<<"\nthis is obj2 values \n";
    obj2.show();  // they call the obj2 value of n = 200
    obj2.display();  // they call obj2 value of ch = @

    return 0;
}