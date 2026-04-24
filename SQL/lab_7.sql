create database lab_7;
use lab_7;

create table student(
Roll_no int primary key,
name varchar(20),
age int,
city varchar(10)
);

insert into student values
(1, 'Ali', 20, 'Mardan'),
(2, 'Sara', 22, 'Peshawar'),
(3, 'Ahmed', 21, 'Lahore');

select*from student;
select name,city from student;
select*from student where city='Peshawar';

create table employees
(
id int primary key,
name varchar(20),
dept varchar(10)
);
INSERT INTO employees
(id,name, dept) VALUES
(1, 'Alice', 101),
(2, 'Bob', 102),
(3, 'Carol', NULL);

CREATE TABLE departments(
dept_id INT PRIMARY KEY,
dept_name VARCHAR(50)
);

INSERT INTO
departments 
(dept_id,dept_name) VALUES
(1, 'Sales'),
(2,'Markeing');

-- inner join--> same value print fromselct columns
select*from employees
inner join departments
on employees.id=departments.dept_id;

-- left join-->  same value from both table and all values from left/1st table print fromselct columns
select*from employees
left join departments
on employees.id=departments.dept_id;

-- right join -->  same value from both table and all values from right/2nd table print fromselct columns
select*from employees right join departments on employees.name=departments.dept_name;

-- full join -->  all values from both tables (tacke unoin of both)
select*from employees as emp
left join departments as dept
on emp.id=dept.dept_id
union
select*from employees as emp
right join departments as dept
on emp.id=dept.dept_id;

-- NATURAL JOIN-->Automatically joins tables using all columns with the same name and data type — no need to specify the join condition.
select*from employees natural join departments;

-- CROSS JOIN-->Returns the Cartesian product — every row from Table A combined with every row from Table B.
select*from employees cross join departments;

-- SELF JOIN-->A table joined with itself — treated as two separate copies using aliases.
SELECT e1.name AS Employee1, e2.name AS Employee2, e1.dept
FROM employees e1
JOIN employees e2
ON e1.dept = e2.dept
AND e1.id <> e2.id;