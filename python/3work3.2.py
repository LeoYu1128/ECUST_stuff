L=list(open("stut.txt",'r'))
f=open("level.txt",'w')
del L[0]
for s in L:
    x=s.split()
    for i in range(1,len(x)):
       x[i]=int(x[i])
    sum=x[1]+x[2]+x[3]
    if x[1]>=85 and x[2]>=85 and x[3]>=85 and sum>=260:
        key='优秀'
    elif x[2]>=60 and x[3]>=60 and sum>=180:
        key='及格'
    else:
        key='不及格'
    f.write('%s\t%s\n'%(x[0],key))
f.close()
