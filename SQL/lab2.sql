drop table T4;
drop table T3;
drop table T2;
drop table T1;

create table T1(
	a1 varchar(20),
	b1 varchar(20),
	c1 varchar(20),
	d1 varchar(20),
	primary key(d1)
);


create table T2(
	a2 varchar(20),
	b2 varchar(20),
	c2 varchar(20),
	d2 varchar(20),
	d1 varchar(20),
	primary key(d2),
	foreign key(d1) references T1(d1)
);


create table T3(
	a3 varchar(20),
	b3 varchar(20),
	c3 varchar(20),
	d3 varchar(20),
	primary key(d3)
);


create table T4(
	a4 varchar(20),
	b4 varchar(20),
	c4 varchar(20),
	d4 varchar(20),
	d3 varchar(20),
	d2 varchar(20),
	primary key(d4),
	foreign key(d3) references T3(d3),
	foreign key(d2) references T2(d2)
);


create table dept(
	id number(4),
	faculty varchar(20),
	name varchar(20),
	no_of_students number(20),
	credit number(5),
	primary key(id)
);
