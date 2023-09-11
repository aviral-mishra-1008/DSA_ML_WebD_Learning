import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv("DATA\diabetes.csv")

# print(data)

x = data[0].values
y = data[1].values

print(x)
# plt.figure()
# plt.plot(x,y)
# plt.show()