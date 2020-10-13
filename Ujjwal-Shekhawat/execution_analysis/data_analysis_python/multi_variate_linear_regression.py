import sys
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from mpl_toolkits import mplot3d

if len(sys.argv) < 2:
	print('No data file found ...')
	sys.exit()

data = pd.read_csv(sys.argv[1])

#data=pd.read_csv("data2.txt")

data = data.sample(frac=1)

#nor_data=(data-data.mean())/data.std() #Why? normilazation VVIP
nor_data=np.array(data)


#nor_data = np.array(data)
print(nor_data.shape)


x=np.array(nor_data[:,0:2])#; print(x)
y=np.array(nor_data[:,2])
y=y.reshape(-1,1)
xstack = np.zeros(np.size(x, 0), int)
xstack = xstack.reshape(-1, 1)
xstack += 1
x = np.hstack((xstack, x))
#print(y)

#plotting the data
fig=plt.figure()
ax=plt.axes(projection='3d')
ax.scatter3D(x[:,1],x[:,2],y, color='blue')
plt.show()

#initializing gradient descent
iterations=100 #works well with 200 iterations and alpha being set to 0.1 also
alpha=0.001
m=np.size(data,0)
theta=np.zeros((np.size(x,1),1), float);print(theta)
temp_theta=np.zeros((np.size(x,1),1), float)
for i in range(iterations):
	h=np.dot(x, theta)#; print(h)
	temp_theta=theta-alpha*(1/m)*sum(np.dot(x.T, (h-y)))#; print(temp_theta)
	theta=temp_theta
print("the values of theta are "+str(theta))

#Revert
# y_pred=(np.dot(x, theta) * data.std()[2]) + data.mean()[2]
# x[1] = (data[0] * data.std()[0]) + data.mean()[0]
# x[2] = (data[1] * data.std()[1]) + data.mean()[1]


y_pred=np.inner(theta.transpose(),x).transpose()
y_pred=np.dot(x, theta)
fig=plt.figure()
ax=plt.axes(projection='3d')
ax.scatter3D(x[:,1],x[:,2],y,color='blue')
ax.scatter3D(x[:,1],x[:,2],y_pred,color='black')
plt.show()