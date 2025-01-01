# Write your MySQL query statement belowid from Employees as name
select 
eu.unique_id as unique_id,e.name as name 
from Employees e left join EmployeeUNI eu on e.id=eu.id