/*int show(student *s) -->Pass by Address
void func(ClassName *obj)
Uses the pointer to the object*/
 
#include<iostream>
using namespace std;
class student{
	 private:
	        int  age;	
	 public:
	 	 int set(int a){
	 	 	age=a;
		  }
		   
		   int show(student *s) 
		   {
		   	cout<<"another student age is: "<<s->age<<endl;
		   }
};
 
int main()
{
	student s1, s2;
	
	s1.set(20);
	s2.set(30);
	
	s1.show(&s2);
	 
	return 0;
}
