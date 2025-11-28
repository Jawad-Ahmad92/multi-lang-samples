#include<iostream>
using namespace std;
class person{
    protected:
    int id;
    char name[50],address[100];
    public:
    person(){   // this is a person class constructor that he set values og the member 0 by default
        id=0;
        name[0]='\0';
        address[0]='\0';
        
    }
       // getinfo()-->Takes user input for id, name, address.
    int getinfo(){
        cout<<"enter user information:\n";
        cout<<"enter user id number:";
        cin>>id;
        cin.ignore();          // To clear leftover newline from previous cin
        cout<<"enter user name:";
        cin.getline(name ,50);
        
        cout<<"enter your address:";
        cin.getline(address,100);

        return 0;
    }
    //showinfo()-->Displays name, ID, and address
    
    int showinfo(){
        cout<<"\nthe user information is :"<<endl;
        cout<<"the user id number is:"<<id<<endl;
        cout<<"the user name is:"<<name<<endl;
        cout<<"the user address is:"<<address<<endl;

        return 0;
    }
};
     //this is derived class

class student:public person{
    private:
    int rno,marks;  //--> this is by default private

    public:
    student():person(){    // if we wrte it like this student()--> so they call atumatically person constructor 
                           //but we used this student():person()-->so we manvaly call the person constructor
    rno=0;
    marks=0;
    }
               //get the user info like rollnumber and marks
    int getstudentinfo(){
        cout<<"enter your roll number:";
        cin>>rno;
        cout<<"enter your marks:";
        cin>>marks;
       return 0;
    }
    
    //show or display the user information
    int showstudentinformation(){
        cout<<"\nthis is your educational information:"<<endl;
        cout<<"Roll number of the student is:"<<rno<<endl;
        cout<<"marks of the student is:"<<marks<<endl;

        return 0;
    }
};
int main()
{
    student s1;
    s1.getinfo();  // they take the user personal info
    s1.getstudentinfo(); //they take the user educational info

     s1.showinfo();  //they show the user persnal info
    s1.showstudentinformation();  //they show the user educational info
    return 0;
}


   //output
/*enter user information:
enter user id number:1
enter user name:Jawad Ahmad
enter your address:mardan
enter your roll number:4
enter your marks:890

the user information is :
the user id number is:1
the user name is:Jawad Ahmad
the user address is:mardan

this is your educational information:
Roll number of the student is:4
marks of the student is:890
*/