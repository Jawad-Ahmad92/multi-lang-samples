create database college;
use college;

insert into students
(rollno,name,marks,grade,city)
values
(101,"anil",78,"c","pune"),
(102,"bhumika",93,"A","mumbai"),
(103,"chetan",85,"B","mumbai"),
(104,"dhrun",96,"A","Delhi"),
(105,"emanual",12,"F","delhi"),
(106,"farah",82,"B","delhi");

SELECT *FROM STUDENTS order by GRADE ASC;
use college;
                # (AGGREGATE FUNCTION)
SELECT COUNT(*) FROM STUDENTS;  /*--> they print only 6 becuze their are 6 rows values insert */

select sum(marks) from students;   #they print 446 because the summ of all marks total is 446

select avg(marks) from students;   #they print 74.333 becuse average of all marks is 74.33

select max(marks) from students;   #they print 96 becuse maximum marks is 96 thire

select min(marks) from students;    #they print 12 beacuse less/minimum value is 12 theire

select grade ,count(grade) from students group by grade order by grade desc;

          # HAVING cluse--> condition on groups
select count(name),city
from students
group by city
having max(marks)>90;

         #update-->exacting colum update with new data
update students
set name="jawad"
where name="anil";

set sql_safe_updates=0;  #safe moode off 
select*from students; 
         
         #delete-->delete existaning row
delete from students
where marks<33;
         
         #ALTER add--> add new column
alter table students
add column age int ;

      #ALTER drop --> delete a specific column 
alter table students
drop column age;

      #Alter rename --> rename table
alter table student
rename to students;
      #alter change --> change column name
alter table students
change  Roll_NO  rollno int;

      #truncate--> delte only table data 
truncate table students;

select*from students;

