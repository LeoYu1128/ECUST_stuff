from tkinter import *
from tkinter.ttk import *
root=Tk()
root.title('景点购票')
root.geometry('800x800')

def fun():
    a=float(t1.get())
    #dic={0:'东方明珠',1:'野生动物园',2:'科技馆'}
    if var.get()==0:
        if a>=50:
            b=a*160*(0.8)
        elif 50>a>=20:
            b=a*160*(0.95)
        else :
            b=a*160
        c=('购买%f张票，票价%f元\n'%(a,b))
     if (var.get()==1):
         if a>=50:
            b=a*130*(0.8)
         elif 50>a>=20:
            b=a*130*(0.95)
         else :
            b=a*130
        c='购买%f张票，票价%f元\n'%(a,b)
     else :
        if a>=50:
            b=a*60*(0.8)
        elif 50>a>=20:
            b=a*60*(0.95)
        else :
            b=a*60
        c='购买%f张票，票价%f元\n'%(a,b)
    lb.config(text=c)
    t1.delete(0,END)
lb1=Label(root,text='请选择景点:')
lb1.pack()
var=IntVar()
rd1=Radiobutton(root,text='东方明珠',variable=var,value=0)
rd1.pack()
rd2=Radiobutton(root,text='野生动物园',variable=var,value=1)
rd2.pack()
rd3=Radiobutton(root,text='科技馆',variable=var,value=2)
rd3.pack()
lb2=Label(root,text='请输入购票张数:')
lb2.pack()
t1=Entry(root)
t1.place(relx=0.4,rely=0.2,relwidth=0.2,relheight=0.05)
bd=Button(root,text='计算',command=fun)
bd.place(x=350,y=500)
lb=Label(root,text='')
lb.place(rely=0.7,relheight=0.3)
root.mainloop()
