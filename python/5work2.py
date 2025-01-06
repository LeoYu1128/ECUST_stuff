class person:
    def __init__(self,name,sex,age,battle):
        self.name=name
        self.sex=sex
        self.age=age
        self.battle=battle
class game:
    def __init__(self,play,py,work):
        self.play=play
        self.py=py
        self.work=work
d=game(-200,100,-500)
a=person('小鹿纯子','女',18,1000)
b=person('南乡小雄','男',20,1800)
c=person('美智','女',19,2500)
print('小鹿纯子2次学习python，一次上课玩手机')
print('最终战斗力为：%d'%(a.battle+2*d.py+d.play))
print('南乡小雄4次学习python,一次上课玩手机，一次抄袭作业')
print('最终战斗力为：%d'%(a.battle+4*d.py+d.play+1*d.work))
print('美智5次学习python,两次抄袭作业')
print('最终战斗力为：%d'%(a.battle+5*d.py+2*d.work))
