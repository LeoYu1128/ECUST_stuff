#coding:UTF-8
a=open("text1.txt",'r')
c=a.read()
d=c.split()
b=input("请输入学号")
for i in d:
    if b in d:
        if b==d[0]:
            print("欢迎%s进入"%d[1])
            break
        if b==d[2]:
            print("欢迎%s进入"%d[3])
            break
        if b==d[4]:
            print("欢迎%s进入"%d[5])
            break
        if b==d[6]:
            print("欢迎%s进入"%d[7])
            break
    else:
        print("你没有权限")
        break
