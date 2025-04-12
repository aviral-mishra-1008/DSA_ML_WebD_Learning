t = int(input())
for i in range(t):
    x = int(input())
    splitP = list()

    while x>0:
        splitP.append(x%10)
        x = x//10
    
    splitP = splitP[::-1]
    
    zeroC = splitP.count(0)
    if zeroC==0:
        print(len(splitP)-1)
        continue

    nonZeroC = 0
    for i in splitP:
        if i!=0:
            nonZeroC+=1
    
    remZero = 0
    j = len(splitP)-1
    while j>=0:
        if splitP[j]!=0:
            break
        remZero+=1
        j-=1
    
    print(remZero+nonZeroC-1)
