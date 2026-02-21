create database self;
use self;

create table employe(
     id int ,
     name varchar(50),
     manger_id int
);

insert into employe
values
(101,"jawad",103),
(102,"ijaz",104),
(103,"adnan",null),
(104,"abdullah",103);

select b.name as manager_id,a.name
from employe as a
join employe as b
on a.manger_id=b.id;