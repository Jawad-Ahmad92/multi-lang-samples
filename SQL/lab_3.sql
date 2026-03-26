create database lab_3;
use lab_3;

CREATE TABLE employee(
 emp_no INT PRIMARY KEY,
 e_name VARCHAR(50),
 e_address VARCHAR(100),
 e_ph_no VARCHAR(15),
 dept_no INT,
 dept_name VARCHAR(50),
 job_id VARCHAR(20),
 designation VARCHAR(50),
 salary DECIMAL(10,2),
 hiredate DATE
);

INSERT INTO employee VALUES
(1,'Ali','Mardan','0300',10,'IT','J1','MANAGER',50000,'1982-05-10'),
(2,'Sara','Peshawar','0301',20,'HR','J2','CLERK',20000,'1981-12-03'),
(3,'Hassan','Swat','0302',10,'IT','J3','ANALYST',30000,'1981-05-01'),
(4,'Usman','Lahore','0303',30,'Finance','J4','PRESIDENT',80000,'1980-01-19'),
(5,'Sana','Karachi','0304',20,'HR','J5','CLERK',22000,'1983-07-15');

SELECT emp_no, e_name, salary
FROM employee
WHERE designation = 'MANAGER';

SELECT *
FROM employee
WHERE salary > ANY (
 SELECT salary FROM employee WHERE designation='ANALYST'
);

SELECT *
FROM employee
WHERE hiredate > '1981-01-01'
ORDER BY designation ASC;

SELECT e_name,
 DATEDIFF(CURDATE(), hiredate) AS experience_days,
 salary/30 AS daily_salary
FROM employee;


SELECT *
FROM employee
WHERE designation IN ('CLERK','ANALYST');
🔹 6. Specific dates
SELECT *
FROM employee
WHERE hiredate IN ('1981-05-01','1981-12-03','1980-01-19');


SELECT *
FROM employee
WHERE dept_no IN (10,20);


SELECT *
FROM employee
WHERE e_name LIKE 'S%';
 
 
SELECT e_name, SUBSTRING(e_name,1,5)
FROM employee
WHERE e_name LIKE 'H%';


SELECT *
FROM employee
WHERE designation NOT IN ('PRESIDENT','MANAGER')
ORDER BY salary ASC;