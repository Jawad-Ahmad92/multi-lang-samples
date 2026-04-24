create database lab_6;
use lab_6;

create table  Employee
(
employe_id int primary key,
name varchar(20),
age int,
dept varchar(20),
salary float
);

insert into employee values
(1, 'Ali', 25, 'IT', 40000),
(2, 'Ahmed', 30, 'HR', 30000),
(3, 'Sara', 28, 'IT', 55000),
(4, 'Ayesha', 22, 'Finance', 25000),
(5, 'Bilal', 35, 'IT', 60000),
(6, 'Asad', 27, 'HR', 32000),
(7, 'Zara', 24, 'Finance', 27000);

-- where cluase-- 
-- AND clause --> must all condition will be true-- 
select*from employee where age>25 and age<=28 and salary>25000;

-- OR cluase---> if one condition is true display it-- 
select*from employee where age>26 or salary > 30000;

-- like clause -- 
select*from employee where name like 'A%';  -- show only who start name from "A" word
select*from employee where name like '%A';  -- show only who end name on "A" word
select*from employee where name like '%A%';  -- show only who containing in name "A" word

-- limit clause --> display only limited rows result -- 
select*from employee limit 5;  -- 5 its mean display only 5 rows
select*from employee limit 2;  --  its mean display only 2 rows

-- Order by clause --> asending and desecnding order
select*from employee order by salary;   -- Ascending order
select*from employee order by salary DESC;  -- Desending orer first show highest value then below

-- group by clase -->
select age ,count(age) from employee group by age;

-- having clause 
select count(name),age from employee group by age having max(salary)>=25000;

-- distenet clause --> give uniqe values
select Distinct age from employee;

-- REname (AS clause)
select*from employee as em;