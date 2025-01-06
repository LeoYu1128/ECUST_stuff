#coding=gbk
import numpy as np
import matplotlib.pyplot as plt
from pylab import *
myfont=matplotlib.font_manager.FontProperties(fname='c:/Windows/Fonts/STSONG.TTF')
matplotlib.rcParams['axes.unicode_minus']=False
x=np.arange(0.5,2.5,0.02)
y1=np.exp(-x)*np.cos(2*np.pi*x)
y2=np.sin(2*np.pi*x)*cos(3*np.pi*x)
p1=plt.subplot(211)
p2=plt.subplot(212)
p1.plot(x,y1,'b.',label='$y=e^{-x}\cdot\cos(2\pi x)$')
p2.plot(x,y2,'r-',label='$y=\sin(2\pi x)\cos(3\pi x)$',linewidth=2)
p1.axis([0.5,2.5,-1.0,1.5])
p1.set_ylabel('y',fontsize=12)
p1.set_title('函数曲线',fontsize=20,fontproperties=myfont)
p1.grid(True)
p2.axis([0.5,2.5,-1.0,1.5])
p2.set_ylabel('y',fontsize=12)
p2.set_xlabel('x',fontsize=12)
p2.legend()
plt.show()
