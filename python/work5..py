d=0
a=input("请输入文件名")
if a=='aaa.txt':
    b=open("aaa.txt",'r')
    c=b.read()
    e=c.split()
    e[1]=int(e[1])
    e[0]=int(e[0])
    if e[1]==0:
        print("除数为0")
    else:
        d=e[0]/e[1]
        print(d)
if a!='aaa.txt':
    print("文件打开失败")
