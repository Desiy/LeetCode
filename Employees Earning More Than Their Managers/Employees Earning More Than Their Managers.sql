select a.Name as Employee  from Employee a join Employee b on a.managerid=b.id where a.salary>b.salary