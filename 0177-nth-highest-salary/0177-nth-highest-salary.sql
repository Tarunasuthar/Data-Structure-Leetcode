CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      select salary from (select salary,Dense_rank() over(order by salary desc) as number
      from Employee) as r
      where number = N
      limit 1
  );
END