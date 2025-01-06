import matplotlib.pyplot as plt
import numpy as np
import math as m
x=np.linspace(-5,5,100)
y=(1/m.sqrt(2*np.pi))*np.exp((-(x^{2}))/2)
plt.plot(x,y)
plt.show()
