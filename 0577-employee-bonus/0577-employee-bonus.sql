# Write your MySQL query statement below

SELECT e.name , b.bonus from Employee e left join Bonus b on e.empID=b.empID where b.bonus<1000 || b.bonus is NULL;