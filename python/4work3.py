while True:
    a=float(input('请输入第一个数'))
    b=float(input('请输入第二个数'))
    c=input('请输入运算符号+,-,*,/,其他符号为退出')
    d=('+','-','*','/')
    if c not in d:
        break
    e={'+':a+b,'-':a-b,'*':a*b,'/':a/b}
    print(e.get(c))
