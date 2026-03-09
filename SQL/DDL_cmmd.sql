create database university;
use university;

create table student(
roll_no int primary key,
name varchar(50),
program varchar(50)
);

select*from student;

Alter table student
Add column Address varchar(100);

Alter table student
modify column Address varchar(20);

Alter table student
drop column program;

Alter table student
rename column name to student_name;

create table Employee(
emp_no int ,
E_name varchar(50),
E_address varchar(50),
E_ph_no int,
dept_no int,
dept_name varchar(50),
job_id char,
salary int
);

Alter table employee
Add column Hiredate int;

Alter table employee
modify column job_id varchar(2);

Alter table employee
rename column emp_no to E_no;

Alter table employee
modify column job_id varchar(30);

select*from employee;