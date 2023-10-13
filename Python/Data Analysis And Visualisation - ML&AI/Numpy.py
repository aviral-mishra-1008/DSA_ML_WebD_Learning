import numpy as np
data = np.genfromtxt(r"C:\Users\DELL\Desktop\Python Files\Data Analysis And Visualisation - ML&AI\Data.txt",delimiter=',',dtype="int32")
print(data[1,:])
weights = [0.012,0.043,0.022,0.005,0.006,0.001]
output = data*weights
print('The output of apples produced is: ',np.sum(output)," tons!")

