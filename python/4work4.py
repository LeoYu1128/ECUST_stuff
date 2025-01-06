from calendar import *
y=input('请输入年')
m=input('请输入月')
d=input('请输入日')
dic={0:'星期一',1:'星期二',2:'星期三',3:'星期四',4:'星期五',5:'星期六',6:'星期日'}
if y.isdigit() and m.isdigit() and d.isdigit() and 1<=int(m)<=12 and 1<=int(d)<=31:
    w=weekday(int(y),int(m),int(d))
    print("你输入的%s年%s月%s日是%s"%(y,m,d,dic[w]))
else:
    print('输入日期有误')
