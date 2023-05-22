# Write your MySQL query statement below
SELECT max(salary) AS SecondHighestSalary from Employee WHERE salary NOT in (SELECT max(salary) from employee);