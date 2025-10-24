/* Write your PL/SQL query statement below */

select E1.firstName ,E1.lastName ,
E2.city,E2.state from Person E1
left join Address E2 
on E1.personId = E2.personId;