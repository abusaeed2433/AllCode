
drop table student;


create table student(
	roll int,
	name varchar(20),
	dept varchar(10),
	height real,
	cgpa number(3,2),
	primary	key(roll)
);


insert into student(roll,name,dept,height,cgpa) values(1907001,'shimu','cse',5.5,3.80);
insert into student values(1907002,'sina','cse',5.6,3.70);

insert into student values(1907057,'saeed','mse',5.6,3.76);
insert into student values(1907056,'zakaria','mse',5.71,3.78);

insert into student values(1907004,'turjo','bme',5.73,2);
insert into student values(1907005,'turjo','bme',5.73,3);
insert into student values(1907006,'turjo','bme',5.73,4);

set pagesize 200;
set linesize 200;

prompt select * from student order by roll;
select * from student order by roll;


prompt select * from student order by cgpa desc;
select * from student order by cgpa desc;


prompt select count(roll) as total_students, sum(cgpa) as total_cgpa, min(cgpa) as min_cgpa, avg(cgpa) as avg_cgpa, max(cgpa) as max_cgpa from student;
select count(roll) as total_students, sum(cgpa) as total_cgpa, min(cgpa) as min_cgpa, avg(cgpa) as avg_cgpa, max(cgpa) as max_cgpa from student;


prompt select count(roll), sum(cgpa), min(cgpa), avg(cgpa), max(cgpa) from student;
select count(roll), sum(cgpa), min(cgpa), avg(cgpa), max(cgpa) from student;


prompt select avg(cgpa) from student group by dept;
select dept,avg(cgpa) from student group by dept;


prompt select dept,name,avg(cgpa) from student group by dept,name;
select dept,name,avg(cgpa) from student group by dept,name;


prompt select dept, avg(cgpa) avg from student where dept like '_s_' group by dept having avg(cgpa)>3.75;
select dept, avg(cgpa) avg from student where dept like '_s_' group by dept having dept like 'm%';

