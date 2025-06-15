# Write your MySQL query statement below
SELECT P.firstName , P.lastName , a.city , a.state
FROM Person p
LEFT JOIN Address a ON p.personId = a.personId ; 