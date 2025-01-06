#coding=UTF-8
i=0
print("欢迎进入某班级成绩管理系统")
print("系统设计与开发人员：余政陽")
print("版本信息：第二版（试运行）")
print("***********************************************************************")
print("1.计算总分   ",end=" ")
print("2.求最高分   ")
print("3.划分等级   ",end=" ")
print("4.画柱状图   ")
print("***********************************************************************")
x=int(input("请输入你的数学成绩"))
y=int(input("请输入你的语文成绩"))
z=int(input("请输入你的英语成绩"))
while 1:
    a=int(input("请输入你的选择"))
    if a==1:
        i=x+y+z
        print("你的总成绩为%d"%i)
    if a==2:
        b=max(x,y,z)
        print("最高分为%d"%b)
    if a==3:
        c=x+y+z
        if c>=200:
            print("等级为A")
        if 100<=c<200:
            print("等级为B")
        if c<100:
            print("等级为C")
    if a==4:
        import matplotlib.pyplot as plt
        a=[x,y,z]
        plt.bar(range(len(a)),a)
        plt.show()
    m=input("继续请按Y,退出请按N")
    if m=='N':
        break
