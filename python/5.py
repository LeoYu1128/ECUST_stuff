import random
a=random.randint(0,100)
b=0
while b!=a:
    b=int(input("请输入你猜的数"))
    if b>a:
        print("太大了")
    if b<a:
        print("太小了")
    if b==a or b>100:
        print("答对了")
        break;
