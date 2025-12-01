#include<iostream>
using namespace std;
struct student{
	int rollno;
	int marks;
	float avg;
	char grade;
};
int main()
{
	student s1;
	cout<<"enter a roll number: ";
	cin>>s1.rollno;
	cout<<"enter your marks: ";
	cin>>s1.marks;
	cout<<"enter yor average: ";
	cin>>s1.avg;
	cout<<"enter your grade: ";
	cin>>s1.grade;
	
	cout<<"\nthe student info:"<<endl;
	cout<<"Roll No: "<<s1.rollno<<endl;
	cout<<" marks is: "<<s1.marks<<endl;
	cout<<" average: "<<s1.avg<<endl;
	cout<<"Grade is : "<<s1.grade<<endl;
}

