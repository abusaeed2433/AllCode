
-- create table dept(
-- 	dept_id varchar(10) primary key,
-- 	name varchar(30) not null,
-- 	no_of_teachers integer check(no_of_teachers>0),
-- 	status varchar(10),
-- 	constraint validate_dept_info check(
-- 		(status in ('running','not running'))
-- 	)
-- );

-- create table course(
-- 	dept_id varchar(10),
-- 	code integer primary key check(code>1000),
-- 	title varchar(20),
-- 	nob integer,	
-- 	foreign key(dept_id) references dept(dept_id),
-- 	constraint validate_course_info check(
-- 		(title is not null) and (nob>0)
-- 	)	
-- );

delete from dept;
delete from course;

set pagesize 200;
set linesize 200;	

insert into dept values('cse','Computer science',11,'running');
insert into dept values('dse','Computer science',12,'running');
insert into dept values('ese','Computer science',13,'running');



insert into course values('cse',3100,'Web Lab',31);
insert into course values('cse',3104,'Peripheral Lab',13);
insert into course values('ese',3110,'Database Lab',35);	


prompt select * from dept;
select * from dept;


prompt select * from course;
select * from course;


prompt select * from dept D natural join course C;
select * from dept D natural join course C;


prompt select dept_id, sum(nob) from dept left outer join course C using(dept_id) group by dept_id;
select dept_id, sum(nob) from dept left outer join course C using(dept_id) group by dept_id;


prompt delete from dept where dept_id='ese';
delete from dept where dept_id='ese';

prompt 'Re-inserting again';
insert into dept values('ese','Computer science',13,'running');
insert into course values('ese',3110,'Database Lab',35);


select * from dept join course on dept.dept_id = course.dept_id;

select * from dept left join course on dept.dept_id = course.dept_id;

select * from dept left outer join course on dept.dept_id = course.dept_id;


