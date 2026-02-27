#include<iostream>
using namespace std;

class student{
    private:

    int marks[5];
    int sum;
    float avg;

    public:

    int get_marks(int studentno){
        sum=0;
        cout<<"marks of the "<<studentno<<endl;
        for(int i=0;i<5;i++){
            cout<<"subject:"<<i+1<<endl;
            cin>>marks[i];
            sum+= marks[i];
        }
    }
    
    int calculate(){
        avg=sum/5.0;
    }

    int display(int studentno){
        cout<<"student"<<studentno<<"result"<<endl;
        cout<<"total marks:"<<sum<<endl;
        cout<<"average:"<<avg<<endl;

    }
};

int main()
{
    student s[5];

    for(int i=0;i<5;i++){
        s[i].get_marks(i+1);
        s[i].calculate();
    }

    for(int i=0;i<5;i++){
        s[i].display(i+1);
    }

    return 0;
}