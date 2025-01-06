s=open("stut.txt",'r')
f=open("level.txt",'w')
s.readline()
while True:
    x=s.readline().split()
    if len(x)==0:
        break
    for i in range(1,len(x)):
        x[i]=int(x[i])
    sum=x[1]+x[2]+x[3]
    if x[1]>=85 and x[2]>=85 and x[3]>=85 and sum>=260:
        f.write("%s\t%s\n"%(x[0],'及格'))
    elif x[2]>=60 and x[3]>=60 and sum>=180:
        f.write("%s\t%s\n"%(x[0],'及格'))
    else:
        f.write("%s\t%s\n"%(x[0],'不及格'))
s.close()
f.close()
