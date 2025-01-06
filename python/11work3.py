from tkinter import *
root=Tk()
root.title('景点购票')
root.geometry('500x550')
lb=Label(root,text='请选择景点:')
lb.pack()
var=IntVar()
c1=Radiobutton(root,text='东方明珠',variable=var,value=0)
c1.place(x=210,y=35)
c2=Radiobutton(root,text='野生动物园',variable=var,value=1)
c2.place(x=210,y=65)
c3=Radiobutton(root,text='科技馆',variable=var,value=2)
c3.place(x=210,y=95)
lb1=Label(root,text='请输入购票张数:')
lb1.place(x=200,y=125)
e1=Entry(root,width=20)
e1.place(x=180,y=150)
t=Text(root)
t.place(relx=0,rely=0.4,relwidth=1,relheight=1)
def c():
    a=float(e1.get())
    if a>=20 and a<50:
        if var.get()==0:
            s=a*160*0.95
            st='购东方明珠票%d张，票价%f\n'%(a,s)
            t.insert(END,st)
            t.place(relx=0,rely=0.4)
        if var.get()==1:
            s1=a*130*0.95
            st1='购野生动物园票%d张，票价%f\n'%(a,s1)
            t.insert(END,st1)
            t.place(relx=0,rely=0.4)
        if var.get()==2:
            s2=a*60*0.95
            st2='购科技馆票%d张，票价%f\n'%(a,s2)
            t.insert(END,st2)
            t.place(relx=0,rely=0.4)
    if a>=50:
        if var.get()==0:
            s=a*160*0.8
            st='购东方明珠票%d张，票价%f\n'%(a,s)
            t.insert(END,st)
            t.place(relx=0,rely=0.4)
        if var.get()==1:
            s1=a*130*0.8
            st1='购野生动物园票%d张，票价%f\n'%(a,s1)
            t.insert(END,st1)
            t.place(relx=0,rely=0.4)
        if var.get()==2:
            s2=a*60*0.8
            st2='购科技馆票%d张，票价%f\n'%(a,s2)
            t.insert(END,st2)
            t.place(relx=0,rely=0.4)
    if a<20:
        if var.get()==0:
            s=a*160
            st='购东方明珠票%d张，票价%f\n'%(a,s)
            t.insert(END,st)
            t.place(relx=0,rely=0.4)
        if var.get()==1:
            s1=a*130
            st1='购野生动物园票%d张，票价%f\n'%(a,s1)
            t.insert(END,st1)
            t.place(relx=0,rely=0.4)
        if var.get()==2:
            s2=a*60
            st2='购科技馆票%d张，票价%f\n'%(a,s2)
            t.insert(END,st2)
            t.place(relx=0,rely=0.4)
btn=Button(root,text='计算',command=c)
btn.place(x=230,y=180)
