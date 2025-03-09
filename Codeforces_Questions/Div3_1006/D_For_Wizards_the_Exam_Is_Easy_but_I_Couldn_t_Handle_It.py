t = int(input(""))
while t>0:
    n = int(input(""))
    l = input(" ").split(" ")
    for i in range(len(l)):
        l[i] = int(l[i])
    
    inversions = [0]*n
    for i in range(len(l)):
        for j in range(i+1,len(l)):
            if l[i]>l[j]:
                inversions[i]+=1
    
    left = 0
    maxi = 0
    
    for ind,i in enumerate(inversions):
        if i>maxi:
            left = ind
            maxi = i
    
    right = n-1
    while right>=left:
        if l[right]<=l[left] and inversions[right]<=inversions[left]:
            break
        right-=1
    print(left+1,right+1)
    t-=1