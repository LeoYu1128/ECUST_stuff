import numpy as np
import pandas as pd
np.random.seed(1)
df = pd.DataFrame(np.random.rand(25).reshape([5, 5]), index=['A', 'B', 'D', 'E', 'F'], columns=['c1', 'c2', 'c3', 'c4', 'c5'])
print(df)
print('******************************************************')
print('iloc')
print(df.iloc[3:5])
print(df.iloc[0:5,2:5])
print('******************************************************')
print('loc')
print(df.loc['E':'F'])
print(df.loc['A':'F','c3':'c5'])
