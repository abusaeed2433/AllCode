
-- create table supplier(
-- 	supplier_id integer primary key,
-- 	supplier_name varchar(50)	
-- );

-- create table order(
-- 	order_id integer primary key,
-- 	supplier_id integer,
-- 	on delete cascade,
-- 	foreign key(supplier_id) references supplier(supplier_id),
-- 	order_date varchar(20);
-- );

delete from supplier;
delete from order_table;

set pagesize 200;
set linesize 200;	


insert into supplier values(10000,'IBM');
insert into supplier values(10001,'Hewlett Packard');
insert into supplier values(10002,'Microsoft');
insert into supplier values(10003,'NVIDIA');


insert into order_table values(500125,10000,TO_DATE('2003/05/12','yyyy/MM/dd'));
insert into order_table values(500126,10001,TO_DATE('2003/05/13','yyyy/MM/dd'));
insert into order_table values(500127,10004,TO_DATE('2003/05/14','yyyy/MM/dd'));


prompt select * from supplier;
select * from supplier;


prompt select * from order_table;
select * from order_table;


prompt select * from supplier natural join order_table;
select * from supplier natural join order_table;

prompt select supplier_name, order_date from supplier join order_table using(supplier_id);
select supplier_name, order_date from supplier join order_table using(supplier_id);

prompt select * from supplier left outer join order_table using(supplier_id);
select * from supplier left outer join order_table using(supplier_id);


prompt select supplier_id,supplier_name,order_id,order_date from order_table right outer join supplier using(supplier_id);
select supplier_id,supplier_name,order_id,order_date from order_table right outer join supplier using(supplier_id);


prompt select * from supplier S full outer join order_table O using(supplier_id);
select * from supplier S full outer join order_table O using(supplier_id);

prompt select * from supplier S full outer join order_table O on S.supplier_id = O.supplier_id;
select * from supplier S full outer join order_table O on S.supplier_id = O.supplier_id;
