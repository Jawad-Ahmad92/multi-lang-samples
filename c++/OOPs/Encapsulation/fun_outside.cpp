#include<iostream>
using namespace std;

class emloyee{
	private:
		string name;
		float b_pay,h_rent,madical_all,g_pay;
	public:
		int get();
		int calculate();
		int show();
};
int emloyee::get(){
	cout<<"enter your name:";
	cin>>name;
	cout<<"enter basic pay:";
	cin>>b_pay;
}
int emloyee::calculate(){
	h_rent=b_pay*(60.0/100.0);
	madical_all=b_pay*(20.0/100.0);
	g_pay=b_pay+ h_rent+ madical_all;
}
int emloyee::show(){
	cout<<"name is:"<<name<<endl;
	cout<<"basic pay:"<<b_pay<<endl;
	cout<<"home rent:"<<h_rent<<endl;
	cout<<"madical allownse:"<<madical_all<<endl;
	cout<<"total salary is:"<<g_pay<<endl;
}
int main()
{
	emloyee obj1;
	obj1.get();
	obj1.calculate();
	obj1.show();
	
	return 0;
}
