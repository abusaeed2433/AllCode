drop table song;
drop table album;
drop table artist;

create table artist(
	artist_id number(10) primary key,
	name varchar(20)
);

create table album(
	album_id number(10,0) primary key,
	artist_id number(10,0),
	foreign key(artist_id) references artist(artist_id),
	title varchar(50),
	release_year number(5,0)
);

create table song(
	song_id number(10,0) primary key,
	album_id number(10,0), foreign key(album_id) references album(album_id),
	artist_id number(10,0), foreign key(artist_id) references artist(artist_id),
	title varchar(50),
	song_length number(4,0)
);

set pagesize 200;
set linesize 200;

insert into artist values(1,'Rahim');
insert into artist values(2,'Karim');
insert into artist values(3,'Sina');


insert into album values(1,1,'First',2003);
insert into album values(2,2,'First',2003);
insert into album values(3,3,'First',2003);
insert into album values(4,1,'First',2003);

insert into song values(1,1,1,'First song',2);
insert into song values(2,1,1,'aecond songs',9);
insert into song values(3,2,2,'Third song',39);
insert into song values(4,2,3,'4th song',29);

insert into song values(8,3,3,'4th song',49);
insert into song values(5,3,3,'4th song',19);
insert into song values(6,3,3,'4th song',24);
insert into song values(7,3,3,'4th song',23);


select * from artist;
select * from album;
select * from song;

prompt '@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 1 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@';

prompt Rename title column in song table to song_title;
prompt alter table song rename column title to song_title;

alter table song rename column title to song_title;
describe song;


prompt Add release_date column in song table;
promt alter table song add release_date date;

alter table song add release_date date;
describe song;


prompt '@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 2 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@';

update song set release_date = TO_DATE('2021-01-01','yyyy-MM-dd') where album_id=1;
select * from song;

--not supported by mine
-- alter table song drop release_date;
-- select * from song;


update artist set name = 'The Beatles' where artist_id=1;
select * from artist;

delete from song where song_title like 'a%s';
select * from song;


prompt '~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~';
select * from song order by album_id asc;

select album_id, count(song_id) from song group by album_id order by album_id asc;


prompt '~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 5 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~';
select album_id,
	(select max(song_length) from song where song.album_id = album.album_id) as max_length,
	(select name from artist where artist_id = album.artist_id)
from album;

SELECT title, 
       (SELECT name FROM artist WHERE artist_id = album.artist_id) AS artist_name,
       (SELECT MAX(song_length) FROM song WHERE album_id = album.album_id) as mx_length
FROM album;

	

