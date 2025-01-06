import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.externals import joblib
data=pd.read_csv('advertising.csv',index_col=0)
data.plot(kind='scatter',x='TV',y='Sales',title='sales with advertising on TV')
plt.xlabel('TV')
plt.ylabel('sales')
plt.show()
data.plot(kind='scatter',x='Weibo',y='Sales',title='sales with advertising on weibo')
plt.xlabel('Weibo')
plt.ylabel('sales')
plt.show()
data.plot(kind='scatter',x='WeChat',y='Sales',title='sales with advertising on WeChat')
plt.xlabel('WeChat')
plt.ylabel('sales')
plt.show()

X=data.iloc[:,0:3].values.astype(float)
y=data.iloc[:,3].values.astype(float)
linreg=LinearRegression()
linreg.fit(X,y)

print(linreg.intercept_,linreg.coef_)

joblib.dump(linreg,'linreg.pkl')

load_linreg=joblib.load('linreg.pkl')
new_X=np.array([[130.1,87.8,69.2]])
print("6鏈堝箍鍛婃姇鍏�: ",new_X)
print("棰勬湡閿€鍞細",load_linreg.predict(new_X))
