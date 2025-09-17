

select 'Low Salary' as category,
count(if(income<20000,1,null)) as accounts_count from Accounts
union all
select 'Average Salary',
count(if(income>=20000 and income<=50000,1,null)) as accounts_count from Accounts
union all
select 'High Salary' ,
count(if(income>50000,1,null)) as accounts_count from Accounts


-- select 
-- case
-- when income<20000 then 'Low Salary'
-- when income>=20000 and income <= 50000 then 'Average Salary'
-- when income>50000 then 'High Salary'
-- end as category,
-- count(*) as accounts_count
-- from Accounts
-- group by category      

-- this is correct but one issue when count = 0 then category is not in table