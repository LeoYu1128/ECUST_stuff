import numpy as np
g=np.array([3,3,3,3])#生成空假设g
gde=[]
sde=[]
#设各种属性的第一种取值为1，第二种取值为2,最一般为3.最特殊为4
s=np.array([4,4,4,4])#s为最特殊概念描述
example=np.array([[0,1,1,0],[1,1,0,0],[1,1,1,1],[0,0,0,0]]) #样本
for i in range(len(example)):
    for j in range(len(s)):
        gde=np.array([g[j] | example[i,j]])
        sde=np.array([s[j] & example[i,j]]) #这两句为判断覆盖的操作
        if example[i,3]==1:#结果为正例时
            if not (example[i,j]==(gde)):#如果有不覆盖example的描述，将s中的元素尽可能一般化
                for k in range(len(gde)):#一般化的过程，就是判断‘或操作’后，为非零的元素给赋值3，也就是一般化
                    if gde[k] !=0:
                        s[j]=3
            if (example[i,j]==(g[j] | example[i,j])):#为0的元素，代表有覆盖example的描述，该元素为自己原本的值
                s[j]=example[i,j]                
        if example[i,3]==0:#结果为反例时
            if (example[i,j]==(sde)):#如果有覆盖e的描述，将s中的元素尽可能特殊化
                for k in range(len(sde)):#特殊化的过程，就是判断‘与操作’后，为非零的元素给赋值4，也就是特殊化
                    if sde[k] !=0:
                        g[j]=4
            if not (example[i,j]==(sde)):#为0的元素，代表没有覆盖example的描述，该元素为自己原本的值
                g[j]=example[i,j]
print('学习概念为：')
print('s=')
print(s)
print('')
print('g=')
print(g)
print('s=g')
print('代表前三者的判断依据为1 1 1，也就是要满足small red circle才是yes。最后做决定为未知，依照给定的数据再做判断')
