-- must at first
drop table course;
drop table dept;


create table dept(
	dept varchar(10),
	building varchar(20),
	budget number(10,1),	
	primary key(dept)
);


create table course(
	title varchar(20),
	code number(4,0),
	dept varchar(10),
	primary key(title,code),
	foreign key(dept) references dept
);


insert into dept values('cse','cse','100');
insert into dept values('mse','mse','101');
insert into dept values('eee','eee','102');
-- insert into dept values('ece','heat','103');


insert into course(dept,code,title) values('cse',2207,'cse');
insert into course(dept,code,title) values('cse',2207,'dse');
insert into course(dept,code,title) values('mse',2209,'mse');
insert into course(dept,code,title) values('mse',2211,'mse');	

set pagesize 200;
set linesize 200;


PROMPT select * from dept;
select * from dept;

PROMPT select * from course;
select * from course;


PROMPT select dept.dept,title,code+code as newCode from dept,course;
select dept.dept,title,code+code as newCode from dept,course;

PROMPT select D.dept||C.code as courseCode from dept D, course C;
select D.dept||C.code as courseCode from dept D, course C;

PROMPT select * from dept where dept like '%e';
select * from dept where dept like '%e';

PROMPT select upper(dept), lower(title), trim(title) from course;
select upper(dept), lower(title), trim(title) from course;

PROMPT select * from course order by code;
select * from course order by code;

PROMPT select * from course order by code asc, dept desc;
select * from course order by code asc, dept desc;

PROMPT select * from course where code between 2207 and 2211;
select * from course where code between 2207 and 2211;

-- select code,title from course,dept where (title,course.dept) = (building,dept.dept);


-- (select * from dept) union (select * from course); ORA-01790: expression must have same datatype as corresponding expression

PROMPT (select dept from dept where dept='cse') union (select dept from course);
(select dept from dept where dept='cse') union (select dept from course);

PROMPT (select dept from dept where dept='cse') union all (select dept from course);
(select dept from dept where dept='cse') union all (select dept from course);


PROMPT (select dept from dept) intersect (select dept from course);
(select dept from dept) intersect (select dept from course);


PROMPT (select dept from dept) minus (select dept from course);
(select dept from dept) minus (select dept from course);

