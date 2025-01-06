import re
s=input('请输入E-mail地址')
a=re.compile(r'^[a-zA-Z\.]+@[a-zA-Z0-9]+\.[a-zA-Z]{3}$')
b=a.match(s)
if b:
    print('地址合法')
else:
    print('地址不合法')
s1=input('请输入IP地址')
a1=re.compile('^[\d]{1,5}\.[\d]{1,5}\.[\d]{1,5}\.[\d]{1,5}|\.[\d]{1,5}|\.[\d]{1,5}$')
b1=a1.match(s1)
if b1:
    print('地址合法')
else:
    print('地址不合法')
s2=input('请输入手机号码')
a2=re.compile('^\d{11}$')
b2=a2.match(s2)
if b2:
    print('手机号码合法')
else:
    print('手机号码不合法')
s3=input('请输入国内固定电话号码')
a3=re.compile('^[0-9]{2,3}\-[0-9]{6,8}$')
b3=a3.match(s3)
if b3:
    print('国内固定电话号码合法')
else:
    print('国内固定电话号码不合法')
s4=input('请输入身份证号码')
a4=re.compile('^[1-9]\d{5}(18|19|([23]\d))\d{2}((0[1-9])|(10|11|12))(([0-2][1-9])|10|20|30|31)\d{3}[0-9Xx]$')
b4=a4.match(s4)
if b4:
    print('身份证号码合法')
else:
    print('身份证号码不合法')
