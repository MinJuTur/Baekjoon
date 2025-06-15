-- 코드를 입력하세요
SELECT B.BOOK_ID, A.AUTHOR_NAME, substring(B.PUBLISHED_DATE,1,10)
from BOOK as B
join AUTHOR as A on B.AUTHOR_ID = A.AUTHOR_ID
where B.CATEGORY = '경제'
order by PUBLISHED_DATE;