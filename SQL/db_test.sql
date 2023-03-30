
drop table order_table;
drop table goods;
drop table customer;

create table customer(
	id integer,
	name varchar(20) not null,
	contact varchar(50) not null,
	primary key(id)
);


create table goods(
	goods_id integer primary key,
	goods_name varchar(20) not null,
	price integer not null,
	constraint p_check check(
		price >= 0
	)
);

create table order_table(
	order_date date not null,
	customer_id integer,
	goods_id integer,
	foreign key(customer_id) references customer(id)
	on delete cascade,
	foreign key(goods_id) references goods(goods_id)
);


insert into customer values(1,'Abc','kuet0');
insert into customer values(102,'Bjbc','kuet1');
insert into customer values(3,'Cbjc','kuet2');
insert into customer values(4,'Cbjc','kuet2');

insert into goods values(11,'potatoi',10);
insert into goods values(12,'motato',10);
insert into goods values(13,'sotatio',10);

insert into order_table values(TO_DATE('23/03/2023','dd/MM/yyyy'),1,11);
insert into order_table values(TO_DATE('24/03/2023','dd/MM/yyyy'),1,12);
insert into order_table values(TO_DATE('21/03/2023','dd/MM/yyyy'),2,13);

set pagesize 200;
set linesize 200;

select * from customer;
select * from goods;
select * from order_table;

prompt '-----------1-----------';
select goods_name from goods where goods_name like '%i%';
select name from customer where name like '%j%';


prompt '-----------2-----------';
select count(id) from customer;
select name,contact from customer where id=102;


prompt more than 2 order
select customer_id from order_table group by customer_id having count(customer_id)>2;


prompt not_ordered
select * from customer where id not in(select customer_id from order_table);



