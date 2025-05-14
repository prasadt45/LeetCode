select d.name as Department, e.name as Employee, e.salary as Salary 
from employee as e 
join department d on e.departmentId = d.id
where(e.salary,e.departmentId ) in (select max(salary),departmentId from employee group by departmentId)