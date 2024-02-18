l = [20,18,15,20,6,18,5,3]
g = 0
for i in l:
    print("Xoring : ",i," ",end="")
    g = g^i
    print(g)