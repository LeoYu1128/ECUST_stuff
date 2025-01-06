x=[]
d={}
e=[]
a=open("score.csv",'r')
f=open("排名2.txt",'w')
a.readline()
while True:
    b=a.readline()
    if len(b)==0:
        break
    c=b.split(',')
    for i in range(2,6):
        c[i]=float(c[i])
    s=c[2]+c[3]+c[4]+c[5]
    x.append(s)
a.seek(0)
a.readline()
d=dict(zip(a,x))
h=sorted(d.items(),key=lambda x:x[1],reverse = True)
a.seek(0)
k=a.readline()
f.write(k)
for i in range(0,len(h)):
    k=str(h[i])
    f.write(k)
    f.write('\n')
a.close()
f.close()
