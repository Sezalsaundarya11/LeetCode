# Write your MySQL query statement below

select firstname as firstName , lastname as lastName, city, state from Person p left join  Address a on  p.personId = a.personId;