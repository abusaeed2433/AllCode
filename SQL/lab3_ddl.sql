

drop table course;
drop table dept;


create table dept(
	dept_id varchar(10) primary key,
	name varchar(30) not null,
	no_of_teachers integer check(no_of_teachers>0),
	status varchar(10),
	constraint validate_dept_info check(
		(status in ('running','not running'))
	)
);

create table course(
	dept_id varchar(10),
	code integer primary key check(code>1000),
	title varchar(20),
	nob integer,		
	foreign key(dept_id) references dept(dept_id)
	on delete cascade,
	constraint validate_course_info check(
		(title is not null) and (nob>0) and (LENGTH(dept_id)<4)
	)	
);
