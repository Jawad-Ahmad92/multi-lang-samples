create database nested_queries;
use nested_queries;

create table stu(
    rollno int primary key,
    name varchar(50),
    marks int 
);

insert into stu
(rollno,name ,marks)
values
(101,"jawad",78),
(102,"ijaz",93),
(103,"atif",85),
(104,"abdullah",96),
(105,"abdurehman",92),
(106,"alam",92);

select name ,marks
from stu 
where marks >(select avg(marks) from stu);
