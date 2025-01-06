a=open("file1.txt",'r')
f=open("file2.txt",'w')
for i in range(0,5):
    s=a.readline()
    b=s[::-1]
    f.write(b)
f.close()
