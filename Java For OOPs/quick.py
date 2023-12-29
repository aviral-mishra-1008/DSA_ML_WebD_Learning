arr = [[5,6,7],[1,3,5],[1,4,7],[1,2,3],[1,2,9],[1,5,9],[2,2,8],[4,4,10],[2,5,8],[2,2,8]]
for i in range(len(arr)):
    x = (arr[i][0] + 4*arr[i][1] + arr[i][2])/6
    arr[i].append(int(x))
print(arr)