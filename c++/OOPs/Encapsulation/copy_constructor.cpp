#include<iostream>
using namespace std;
class Book{
    private:
    string title;
    double price;
    public:

    Book(string title , double price){
        this->title=title;
        this->price=price;

    }
    //copyconstructor
    Book(const Book &obj){
        title=obj.title;
        price=obj.price;
    }

    int show(){
        cout<<"tilte of book is:"<<title<<endl;
        cout<<"price of the book  is:"<<price<<endl;
    }
};

int main()
{
    cout<<"first book detaild"<<endl;
    Book b1("oops",5.78);
    b1.show();

    cout<<"\nsecond book (copied)"<<endl;
    Book b2=b1;
    b1.show();

    return 0;
}