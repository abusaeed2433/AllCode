
drop table number_test;
drop table numeric_test;
drop table combined;

create table number_test(
	roll number(4,2)
);

create table numeric_test(
	roll numeric(4,2)
);


create table combined(
	roll number(5,1),
	age numeric(5,1)
);


insert into number_test values(44.5);
insert into number_test values(10.5);
insert into number_test values(10.567);

insert into numeric_test values(44.5);
insert into number_test values(10.5);
insert into number_test values(10.567);


insert into combined values(44.5,44.5);
insert into combined values(10.5,10.5);
insert into combined values(10.5678,10.5678);
insert into combined values(10.0,9999.6);

alter table number_test add rnum real;

select * from number_test;
select * from numeric_test;	
select * from combined;



alter table number_test drop rnum;

select * from number_test;