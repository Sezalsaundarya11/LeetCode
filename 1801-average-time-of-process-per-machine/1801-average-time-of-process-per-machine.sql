# Write your MySQL query statement below
SELECT i1.machine_id , ROUND(aVG(i2.timestamp-i1.timestamp),3) as processing_time from Activity i1 join activity i2 on i1.process_id = i2.process_id and i1.machine_id = i2.machine_id AND i1.timestamp<i2.timestamp group by i1.machine_id;
