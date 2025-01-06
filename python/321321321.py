import numpy as np
import matplotlib.pyplot as plt
t=np.arange(0,2*np.pi,0.01)
x=(-2)*np.sin(2*t)+np.sin(t)
y=(-2)*np.cos(2*t)+np.cos(t)
x1=0
y1=0
plt.plot(x,y,'r')
plt.plot(x1,y1)
plt.legend()
plt.show()
