pairs = ((2,5),(4,2),(9,8),(12,10))
l = []
for i in range(len(pairs)):
    for j in pairs[i]:
        if pairs[i][j]%2 ==0:
                l.append(1)

print(sum(l))
        