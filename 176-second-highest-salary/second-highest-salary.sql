# Write your MySQL query statement below
-- select MAX(salary) AS SecondHighestSalary FROM Employee where salary < (select MAX(salary) from Employee);
SELECT (
  SELECT DISTINCT salary FROM employee
  ORDER BY salary DESC
  LIMIT 1 OFFSET 1
) AS SecondHighestSalary;