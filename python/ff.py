from tkinter import *
from numpy import *
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import mpl_toolkits.mplot3d
def zer0():
       E1.delete(0,END)
       E2.delete(0,END)
       E3.delete(0,END)
def zer1():
       E4.delete(0,END)
       E5.delete(0,END)
       E6.delete(0,END)
def Make():
       a=float(E2.get())
       b=float(E3.get())
       x=arange(a,b,0.005)
       y=eval(E1.get())
       plt.plot(x,y,'r')
       plt.show()
def thr():
       fig = plt.figure()
       ax = Axes3D(fig)
       u,v = mgrid[-4:4:30j,-4:4:30j]
       X = eval(E4.get())
       Y = eval(E5.get())
       Z = eval(E6.get())
       ax.plot_surface(X, Y, Z, rstride=2, cstride=1, cmap=plt.get_cmap('rainbow'))
       plt.show()

root=Tk()
root.geometry('800x800')
lb1=Label(root,text='基于Python的专业辅助',font=('宋体',24))
lb1.place(relx=0.3,rely=0)
lb2=Label(root,text='二维函数图像:',font=('宋体',12))
lb2.place(relx=0,rely=0.05)

lb3=Label(root,text='函数解析式:f(x)=',font=('宋体',12))
lb3.place(relx=0.01,rely=0.1)
E1=Entry(root)
E1.place(relx=0.18,rely=0.1)

lb4=Label(root,text='定义域；【      ，      】',font=('宋体',12))
lb4.place(relx=0.01,rely=0.15)
E2=Entry(root)
E2.place(relx=0.12,rely=0.15,width=35)
E3=Entry(root)
E3.place(relx=0.19,rely=0.15,width=35)
bt1=Button(root,text='绘制',command=Make)
bt1.place(relx=0.05,rely=0.2)
bt2=Button(root,text='清空',command=zer0)
bt2.place(relx=0.15,rely=0.2)

lb5=Label(root,text='多元函数图象:',font=('宋体',12))
lb5.place(relx=0,rely=0.25)
lb6=Label(root,text='参数方程（可用参数（u,v））:',font=('宋体',12))
lb6.place(relx=0.01,rely=0.30)
          
lb7=Label(root,text='X= ')
lb7.place(relx=0.02,rely=0.35)
E4=Entry(root)
E4.place(relx=0.06,rely=0.35)
          
lb8=Label(root,text='Y= ')
lb8.place(relx=0.02,rely=0.40)
E5=Entry(root)
E5.place(relx=0.06,rely=0.40)
          
lb9=Label(root,text='Z= ')
lb9.place(relx=0.02,rely=0.45)
E6=Entry(root)
E6.place(relx=0.06,rely=0.45)

bt3=Button(root,text='绘制',command=thr)
bt3.place(relx=0.05,rely=0.50)
bt4=Button(root,text='清空',command=zer1)
bt4.place(relx=0.15,rely=0.50)

root.mainloop()
