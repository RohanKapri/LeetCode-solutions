# Write your MySQL query statement below
SELECT t.request_at as "Day", ROUND((sum(t.status <> 'completed')/count(*)),2)  as "Cancellation Rate"
FROM Users as c
JOIN (
        SELECT *
        FROM Trips
        WHERE request_at between "2013-10-01" and "2013-10-03"
    ) as t
ON c.users_id = t.client_id and c.banned = "No"
JOIN Users as d
ON d.users_id = t.driver_id and d.banned = "No"
GROUP BY request_at;