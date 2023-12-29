def findMaxIndex(arr):
    max = 0
    for i in range(len(arr)):
        if arr[i] > arr[max]:
            max = i
            print('max is : ', max, "arr[i]: ", arr[i], "arr[max]: ", arr[max])
    return max
   






arr = [1,23,2,41,32,11]
k = 3

klargest = []
for i in range(k):
    index = findMaxIndex(arr)
    klargest.append(arr[index])
    arr[index] = -1
    print(arr)

print(klargest) 