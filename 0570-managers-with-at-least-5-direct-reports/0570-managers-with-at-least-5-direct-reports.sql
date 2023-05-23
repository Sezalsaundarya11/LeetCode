# Write your MySQL query statement below
SELECT name from Employee where id in (SELECT managerId from employee group by managerId having count(*)>=5 );
