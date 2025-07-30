# Write your MySQL query statement below
select* from(select email from Person group by email having count(*)>1) as Email ;
