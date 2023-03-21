
-- select * from dept;


-- select count(distinct faculty) as no_of_faculty from dept;
-- select count(*) as no_of_dept from dept;

-- select * from dept where credit>3;

-- select faculty, avg(no_of_students) from dept group by faculty;

-- select faculty, max(no_of_students) as max, min(no_of_students) as min from dept group by faculty;

-- select faculty, avg(no_of_students) from dept group by faculty having avg(no_of_students)>90;


-- select * from dept where credit > some(select credit from dept);



select student_name as name, score from marks;

-- 1
select distinct student_name, score from marks where score > 5;

-- 2
select * from marks where student_name like '%CN%' or student_name like '%AN%';

-- 3

select avg(score),max(score) from marks where score>2;

-- 4

select * from marks where student_name like '_N_';

-- 5



with tt(sm,sb) as (
	(select sum(score) where student_name like '%N' from marks), 
	(select min(score) where student_name like 'A%' from marks)
)
select * from tt;


