create database laab_4; 


CREATE TABLE employees(
 emp_no INT PRIMARY KEY,
 e_name VARCHAR(50),
 e_address VARCHAR(100),
 e_ph_no VARCHAR(15),
 dept_no INT,
 dept_name VARCHAR(50),
 job_id VARCHAR(20),
 designation VARCHAR(50),
 salary DECIMAL(10,2),
 hiredate DATE,
 age INT,
 project VARCHAR(50)
);


INSERT INTO employees VALUES
(1,'Ali','Mardan','0300',10,'IT','J1','MANAGER',50000,'1982-05-10',28,'AI'),
(2,'Sara','Peshawar',NULL,20,'HR','J2','CLERK',20000,'1981-12-03',30,NULL),
(3,'Hassan','Swat','0302',10,'IT','J3','ANALYST',30000,'1981-05-01',35,'Web'),
(4,'Usman','Lahore','0303',30,'Finance','J4','PRESIDENT',80000,'1980-01-19',40,'Finance'),
(5,'Sana','Karachi','0304',20,'Marketing','J5','CLERK',22000,'1983-07-15',25,NULL);


SELECT * FROM employees WHERE salary > 50000;

 
SELECT * FROM employee WHERE salary <= 40000;

 
SELECT * FROM employee WHERE salary = 60000;

 
SELECT * FROM employee WHERE age <> 30;

 
SELECT * FROM employee WHERE salary BETWEEN 30000 AND 70000;

 
SELECT * FROM employee WHERE dept_name='IT' AND salary > 60000;

 
SELECT * FROM employee WHERE dept_name IN ('Sales','Marketing');

 
SELECT * FROM employee WHERE dept_name <> 'HR';
 
 
SELECT * FROM employee WHERE e_ph_no IS NULL;

 
SELECT * FROM employee WHERE project IS NOT NULL;

 
SELECT * FROM employee WHERE e_name LIKE 'A%';
 
 
SELECT * FROM employee WHERE e_name LIKE '%son%';

 
SELECT dept_name FROM employee
UNION
SELECT dept_name FROM employee;

 
SELECT dept_name FROM employee
UNION ALL
SELECT dept_name FROM employee;