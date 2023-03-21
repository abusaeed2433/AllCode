
drop table order_table;
drop table supplier;


create table supplier(
	supplier_id integer primary key,
	supplier_name varchar(50)	
);

create table order_table(
	order_id integer primary key,
	supplier_id integer unique not null,
	foreign key(supplier_id) references supplier(supplier_id) on delete cascade,	
	order_date date
);
