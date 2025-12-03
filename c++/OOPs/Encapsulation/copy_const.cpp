#include<iostream>
using namespace std;
class txt{
	 private:
	        int age;	
	 public:
	 	txt(int a){
	 		age=a;
		 }
	 	txt(const txt &s){
	 		age=s.age;
	 		cout<<"called copy constructor \n";
		 }
		 
		 ~txt(){
		 	cout<<"student age is: "<<age<<endl;
		 }
};
 
int main()
{
	txt ob1(20);
	txt ob2(ob1);
	txt ob3=ob1;
	 
	return 0;
}
