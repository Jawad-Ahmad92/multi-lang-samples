#include<iostream>
using namespace std;

class student{
    private:
    int marks;
    char grade;
    public:
    student(int marks,char grade){
        this->marks=marks;
        this->grade=grade;
    }
    
    int show(){
        cout<<"Marks:"<<marks<<endl;
        cout<<"Grade :"<<grade<<endl;
    }
};

int main(){
    student obj1(849,'A'), obj2(872,'A');
    cout<<"Record of the first student "<<endl;
    obj1.show();
    cout<<"Rcord of second student:"<<endl;
    obj2.show();

    return 0;
}