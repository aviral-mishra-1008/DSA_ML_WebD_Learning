l1 = [1,2,3,4,5,6,7,8,9,10]
it = int(len(l1)/2)
l_temp = []
l_rev = []
for i in range(it):
    x = l1[i]
    l_rev.append(x)

for i in range(it):
    l1.remove(l1[i])
for i in l_rev[::-1]:
    l_temp.append(i)

print(l1)
print(l_temp)
