create database college;
use college;
create table student(
   id int primary key,
   name varchar(50),
   age int not null
);

INSERT INTO STUDENT VALUES(1,"JAWAD",19);
INSERT INTO STUDENT VALUES(2,"IJAZ",21);
INSERT INTO STUDENT VALUES(3,"ali",20);

SELECT * FROM STUDENT;