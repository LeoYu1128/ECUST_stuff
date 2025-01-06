from tkinter import *
import sqlite3
con=sqlite3.connect('school.db')
SQL="create table user(code text(8) primary key, username text(8), password integer(8))"
con.execute(SQL)
SQL="insert into user values('10182142','admin',123456)"
con.execute(SQL)
con.commit()
SQL="select * from user"
cur=con.execute(SQL)
list1=cur.fetchone()
print(list1[1],list1[2])
con.close()
username=list1[1]
password=str(list1[2])
root=Tk()
root.title('密码验证')
root.geometry('250x150')
def fun():
    if(e1.get()==username and e2.get==password):
        print("密码正确，欢迎进入")
        root1=Tk()
        roo1.title("new form")
    else:
        print("密码错误，请重试")
lb1=Label(root,text='用户名:')
lb1.place(x=10,y=10)
e1=Entry(root,font=12,width=15)
e1.place(x=60,y=10)
lb2=Label(root,text='密 码:')
lb2.place(x=10,y=60)
e2=Entry(root,font=12,width=15)
e2.place(x=60,y=60)
b1=Button(root,text='验证密码信息',width=15,command=fun)
b1.place(x=60,y=100)
root.mainloop()
