/* Write your PL/SQL query statement below */

DELETE FROM Person u
WHERE u.ID NOT IN (
    SELECT MIN(ID)
    FROM Person
    GROUP BY email
);
