import numpy as np
lis = [1,2,2,4,4,3]
arr =np.array(lis)
unique, counts = np.unique(arr,return_counts=True)
unique2 = np.unique(np.array(counts))
if len(unique2) == len(counts):
    print("True")
else:
    print("False")