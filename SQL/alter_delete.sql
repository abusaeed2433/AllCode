

alter table T1 add extra varchar(20);
describe T1;

alter table T1 modify extra varchar(10);
describe T1;

alter table T1 rename column extra to charged;
describe T1;

alter table T1 drop column charged;
describe T1;


select * from T1;