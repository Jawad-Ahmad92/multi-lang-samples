/*default copy constructor-->  A copy constructor is a special constructor in C++ that creates a new object as a copy of an existing object.*/

#include<iostream>
using namespace std;
class Book{
    private:
    int pages,price;
    string title;
    public:
    void get(){
        cout<<"enter title of the book:";
        getline(cin, title);
        cout<<"enter pages of the book:";
        cin>>pages;
        cout<<"enter price of the book:";
        cin>>price;

    }
    void show(){
        cout<<"Title :"<<title<<endl;
        cout<<"pages:"<<pages<<endl;
        cout<<"price :"<<price<<endl;
    }
};
int main(){
    Book b1;
    b1.get();
    Book b2(b1);
    Book b3(b2);
    cout<<"\ndetailed of the b1:"<<endl;
    b1.show();
    cout<<"\ndetailed of the b2:"<<endl;
    b2.show();
    cout<<"\ndetailed of the b3:"<<endl;
    b3.show();

    return 0;
}