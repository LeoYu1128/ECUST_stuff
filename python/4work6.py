b=0
a=input('请输入测试密码')
n=len(a)
for i in range(n):
    if '0'<=a[i]<='9':
        b=b+1
        break
for i in range(n):
    if 'a'<=a[i]<='z':
        b=b+1
        break
for i in range(n):
    if 'A'<=a[i]<='Z':
        b=b+1
        break
for i in range(n):
    if n>=8:
        b=b+1
        break
if b>4:
    b=4
print('密码强度为%d级'%b)
