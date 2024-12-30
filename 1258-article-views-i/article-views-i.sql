# Write your MySQL query statement below
-- update coloumn authore_id to id;

select distinct author_id as id from Views where author_id=viewer_id
order by id asc;