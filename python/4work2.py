i=0
b=[]
def a(x):
    for i in range(x,0,-1):
        if x%i==0:
            b.append(i)
    b.remove(x)
    if b==[1]:
        print("该数为素数")
    else:
        print("该数不是素数")
x=int(input("请输入一个整数"))
a(x)
