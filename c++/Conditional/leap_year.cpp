#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"enter a year:";
    cin>>year;

    if(year%4==0){
        cout<<"this is leap yaer:"<<year<<endl;
    }
    else{
        cout<<"this not a leap year:"<<year<<endl;
    }

    return 0;
}