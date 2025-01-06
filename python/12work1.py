import numpy as np
import matplotlib.pyplot as plt
t=np.arange(0,2*np.pi,0.02)
plt.subplot(111,polar=True)
w=np.sin(t)*(np.abs(np.cos(t)))**(1/2)/(np.sin(t)+7/5)-2*np.sin(t)+2
plt.plot(t,w,'b')
plt.show()
