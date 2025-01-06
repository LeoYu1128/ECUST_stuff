import requests
import re
import sqlite3
url="http://www.wandoujia.com/apps"
response=requests.get(url)
data=response.text
conn=sqlite3.connect("school.db")
SQL='''create table information(name char(4) not null,
          link char(10), primary key("name"))'''                   
conn.execute(SQL)
conn.commit()
mydata=re.findall('<a class="cate-link"\s+href="(.+)"\s+title="(.+)">',data)
for item in mydata:
    SQL='''insert into information (name, link) values('%s', '%s')'''%(item[1],item[0])                   
    conn.execute(SQL)
    conn.commit()
conn.close()
