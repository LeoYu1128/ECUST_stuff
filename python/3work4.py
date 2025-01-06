x=[]
d={}
e=[]
a=open("score.csv",'r')
f=open("排名1.txt",'w')
a.readline()
while True:
    b=a.readline()
    if len(b)==0:
        break
    c=b.split(',')
    if len(c)==0:
        break
    for i in range(2,6):
        c[i]=float(c[i])
    s=c[2]+c[3]+c[4]+c[5]
    x.append(s)
    e.append(c[0])
d=dict(zip(e,x))
h=sorted(d.items(),key=lambda x:x[1],reverse = True)
for i in range(0,len(h)):
    k=str(h[i])
    print(k)
    f.write(k)
    f.write('\n')
a.close()
f.close()
