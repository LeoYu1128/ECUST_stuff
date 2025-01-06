#coding:UTF-8
b=0
x=int(input('请输入第一个整数：'))
y=int(input('请输入第二个整数：'))
n=max(x,y)
def a(x,y):
    for i in range(n,0,-1):
        if x%i==0 and y%i==0:
            print('最大公因数为%d'%i)
            break
    b=x*y/i
    print("最小公倍数为%d"%b)
a(x,y)
