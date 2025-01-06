a=int(input("请输入一个数"))
i=1
b=0
while i<a:
    if a%i==0:
        b=b+i
    i+=1
if b==a:
    print("该数为完全数")
if b>a:
    print("该数为丰沛数")
if b<a:
    print("该数为不足数")
