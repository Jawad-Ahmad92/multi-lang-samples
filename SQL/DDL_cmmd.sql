create database university;
use university;

create table student(
roll_no int primary key,
name varchar(50),
program varchar(50)
);

select*from student;
                     --  DDL commands-- 
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

			-- DMl command-- 
describe employee;
            
insert into employee
(E_no ,E_name ,E_address ,E_ph_no ,dept_no ,dept_name ,job_id ,salary,Hiredate )
values
(1,"Jawad","KPK Buner",323484,11,"Computer Science","1001",500000,20210403),
(2,"Ali Khan","Swat Mingora",312345678,12,"Software Engineering","1002",450000,20220612),
(3,"Ahmed Raza","Lahore",301122334,10,"Information Technology","1003",300000,20200805),
(4,"Usman Tariq","Mardan",333555777,11,"Computer Science","1004",420000,20210915),
(5,"Bilal Ahmad","Karachi",344567890,9,"Data Science","1005",380000,20230120);

select*from employee where dept_name ="Computer Science";

update employee set E_address =" india";
set sql_safe_updates=0;

select*from employee where dept_name="Information Technology";

delete from employee where E_address="lahore";

select*from employee where dept_name="software engineering";