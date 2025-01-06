e=0
a=open("file1.txt",'r')
b=a.read()
c=b.strip()
l=len(c)
print("字符数有%d个"%l)
for i in c:
    if i=='\n':
        e=e+1
e=e+1
print("行数有%d行"%e)
