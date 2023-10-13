x = int(input())
y = int(input())
z = int(input())
n = int(input())
l = []
for i in range(x+1):
    l1 = []
    l1.append(i)
    l.append(l1)
s = len(l)
for i in range(s):
    for j in range(y+1):
        l2 = l[i]
        l2.append(j)
        l.append(l2)
        
for i in range(s):
    l.pop()

a = len(l)
for i in range(a):
    for j in range(z+1):
        l3 = l[i]
        l.append(l3)
print(l)
# for i in range(a):
#     l.pop()
# c = []      
# for i in range(len(l)):
#     if sum(l[i])==n:
#         continue
#     else:
#         c.append(l[i])
        
# print(c)
