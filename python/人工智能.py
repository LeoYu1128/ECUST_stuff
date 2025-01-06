from random import randint
y=randint(1,100)
x=int(input('请输入整数：'))
while 1:
    if x>y:
        print('too big')
        x=int(input('请输入整数：'))
    if x<y:
        print('too small')
        x=int(input('请输入整数：'))
    if x==y:
        break
print('game over')
