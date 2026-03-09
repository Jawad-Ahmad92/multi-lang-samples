create database hotel_managment;
use hotel_managment;

create table salesman
(
    salesman_id int primary key,
    name varchar(50),
    city varchar(100),
    commission float 
);

insert into salesman
(salesman_id,name,city,commission)
values
(5001,"james hooq","new york",0.15),
(5002,"nail knite","paris",0.13),
(5003,"pit Alex","london",0.11),
(5004,"Mc lyon","paris",0.14),
(5005,"Lauson hen",null,0.12),
(5006,"paul adam","Rome",0.13);

select salesman_id,name from salesman;

create table customer
(
     customer_id int primary key,
     customer_name varchar(50),
     city varchar(100),
     grade int,
     salesman_id int
);
drop table customer;

insert into customer
(customer_id,customer_name,city,grade,salesman_id)
values
(3002,"NIck remindo","new york",100,5001),
(3005,"graham zusi","califonia",200,5002),
(3001,"Brad guzan","london",null,null),
(3004,"fabian johns","paris",300,5006),
(3007,"brad devis","new york",200,5001),
(3009,"geoff camero","berlin",100,null),
(3008,"jullian green","london",300,5002),
(3003,"jozy altidor","moncow",200,5007);
