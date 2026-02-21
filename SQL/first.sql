create database db_1;
use db_1;
create table users(
    id int primary key,
    name varchar(50),
    age int not null
);
insert into users values(1,"jawad ahmad",19);