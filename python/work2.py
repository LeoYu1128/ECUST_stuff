#coding=UTF-8
c=str()
k=int(input("请输入密钥"))
s=input("请输入字符串")
for i in s:
    if ord(i)>=ord('a')and ord(i)<=ord('z'):
        i=chr(ord(i)+k)
        if ord(i)+k>ord('z'):
            i=chr(ord(i)+k-26)
    if ord(i)>=ord('A')and ord(i)<=ord('Z'):
        i=chr(ord(i)+k)
        if ord(i)+k>ord('Z'):
            i=chr(ord(i)+k-26)
    print(i,end="")
