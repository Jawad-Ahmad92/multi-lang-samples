CREATE DATABASE IF NOT EXISTS company;
USE company;

CREATE TABLE employees (
    emp_id INT PRIMARY KEY,
    first_name VARCHAR(50),
    last_name VARCHAR(50),
    department VARCHAR(50),
    salary FLOAT NOT NULL,
    joining_date DATE,
    city VARCHAR(50)
);

INSERT INTO employees (emp_id, first_name, last_name, department, salary, joining_date, city)
VALUES
(1, 'Jawad', 'Ahmad', 'IT', 120000, '2022-01-15', 'Mardan'),
(2, 'Ali', 'Khan', 'HR', 90000, '2021-07-20', 'Peshawar'),
(3, 'Sara', 'Bibi', 'Finance', 110000, '2023-03-10', 'Swat'),
(4, 'Zain', 'Ullah', 'IT', 115000, '2022-06-05', 'Mardan'),
(5, 'Hina', 'Shah', 'Marketing', 95000, '2021-11-12', 'Peshawar'),
(6, 'Awais', 'Khan', 'Finance', 105000, '2023-01-25', 'Mardan'),
(7, 'Fatima', 'Bibi', 'HR', 92000, '2022-09-30', 'Swat');

select*from employees;

select first_name,salary from employees;

select *from employees where department="IT"; 

select*from employees where salary>100000;

select first_name,joining_date from employees order by joining_date asc;

select avg(salary) from employees;

SELECT department, COUNT(*) AS total_employees
FROM employees
GROUP BY department;

DELETE FROM employees
WHERE emp_id = 5;

INSERT INTO employees (emp_id, first_name, last_name, department, salary, joining_date, city)
VALUES (8, 'Ayesha', 'Khan', 'Marketing', 98000, '2023-02-15', 'Peshawar');