import matplotlib.pyplot as plt
m=int(input('请输入数学成绩'))
e=int(input('请输入英语成绩'))
c=int(input('请输入语文成绩'))
x=[m,e,c]
lb=['MATH','ENGLISH','CHINESE']
explode=[0.1,0.1,0.1] 
plt.pie(x,labels=lb,explode=explode,autopct='%1.2f%%',shadow=True)
plt.show()
