-- Last updated: 7/30/2026, 10:07:32 AM
select email as Email from person
group by email having count(*)>1