# -*- coding: UTF-8 -*-
e=[]
f=0
a=open("123.txt",'r')
a.readline()
while True:
    b=a.readline()
    c=b.split()
    if len(c)==0:
        break
    for i in range(1,2):
        e.append(c[i])
for i in range(0,3):
    e[i]=int(e[i])
f=e[0]+e[1]+e[2]
g=f/3
a.seek(0)
h=a.read()
print(h)
print("语文成绩的平均分为%d"%g)
