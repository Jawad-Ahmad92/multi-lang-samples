#include<iostream>
using namespace std;

class employee{
	private:
		string name;
		float basic_pay,home_rent,madical_allownces,gross_pay;
		public:
			int get();
			int calculate();
			int show();
};
int employee::get(){
	cout<<"enter your name:";
	getline(cin, name);
	cout<<"enter your basic pay:";
	cin>>basic_pay;
}

int employee::calculate(){
	home_rent=basic_pay*(60.0/100.0);
	madical_allownces=basic_pay*(20.0/100.0);
	gross_pay= basic_pay + home_rent + madical_allownces;
}

int employee::show(){
	cout<<"your name is:"<<name<<endl;
	cout<<"basic salary is:"<<basic_pay<<endl;
	cout<<"your home rent is:"<<home_rent<<endl;
	cout<<"your madicall allownces is:"<<madical_allownces<<endl;
	cout<<"your gross/total salary is:"<<gross_pay<<endl;
}
int main(){
	employee obj1;
	obj1.get();
	obj1.calculate();
	obj1.show();
	return 0;
}