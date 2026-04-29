WITH MaxSalaries AS (
    SELECT departmentId, MAX(salary) AS MaxSalary
    FROM Employee
    GROUP BY departmentId
)
SELECT d.name AS Department, e.name AS Employee, e.salary
FROM Employee e
INNER JOIN Department d ON e.departmentId = d.id
INNER JOIN MaxSalaries ms ON e.departmentId = ms.departmentId AND e.salary = ms.MaxSalary;
