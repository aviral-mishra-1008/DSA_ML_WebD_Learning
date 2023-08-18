import numpy as np
nums = [1,2,3,4,5,6,7]
target = 9
arr = np.array(nums)
for i in range(len(arr)):
    arr1 = arr + arr[i]
    if target in arr1:
        x = np.where(arr1==target)[0][0]
        print([i,x])
        break;
