import random as rd
N=int(input("请输入0~100内要产生几个随机数"))
s=[]
b=[]
for i in range(N):
    s.append(rd.randint(0,100))
    b=s[0:N]
    b.sort()
print(b)
