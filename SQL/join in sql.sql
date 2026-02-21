create database sql_join;
use sql_join;

create table student(
     student_id int primary key,
     name varchar(50)
);

insert into student
values
(101,"jawad"),
(102,"ijaz");
INSERT INTO student VALUES (103,"khan");
select*from student;

create table course(
     student_id int primary key,
     courses varchar(50)
);

insert into course
values
(102,"english"),
(105,"math"),
(103,"science"),
(107,"computer science");

        #inner join --> in both table are same value like intersection
        
select*from student as s   #as s---> mean student in short we used it on s
inner join course as c
on s.student_id=c.student_id;

	 #left join --> they print tableA all data and macth data of tableB
select*from student as s
left join course as c
on s.student_id=c.student_id;

    #right join --> they print tableB all data and macth data of tableA
select*from student as s
right join course as c
on s.student_id=c.student_id;

        #full join-->left join + right join
select*from student as a
left join course as b
on a.student_id=b.student_id
UNION
select*from student as a
right join course as b
on a.student_id=b.student_id;

       #left exclusive--> print on only null that not exist in right table
select*from student as s
left join course as c
on s.student_id=c.student_id
where c.student_id is null;

       #right exclusive--> print on only null that not exist in left table
select*from student as s
right join course as c
on s.student_id=c.student_id
where s.student_id is null;

