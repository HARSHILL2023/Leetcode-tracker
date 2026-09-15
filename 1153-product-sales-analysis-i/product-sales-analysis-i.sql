# Write your MySQL query statement below
select S.year ,S.price ,P.product_name from Sales S left join Product P on S.product_id=P.product_id