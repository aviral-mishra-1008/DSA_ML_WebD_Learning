t = int(input(""))
while t>0:
    n,x = input("").split(' ')
    n = int(n)
    x = int(x)
    a = list()    
    
    if n>x:
        an = x
        a.append(an)

        for i in range(x):
            if an | i == an:
                a.append(i)
            else:
                break
        tofill = n-len(a)
        a.extend([0]*tofill)
    
    elif n==x:
        an = x
        a.append(an)

        for i in range(x-1):
            if an | i == an:
                a.append(i)
            else:
                break
        
        tofill = n-len(a)
        if tofill>0:
            a.extend([0]*tofill)
        else:
            check = 0
            for i in range(x):
                check = check | i
            if check==x:
                a.pop(0)
                a.append(x-1)

    else:
        an = x
        for i in range(n):
            if an|i == an:
                a.append(i)
        tofill = n-len(a)
        if tofill>0:
            a.append(x)
            tofill-=1
            a.extend([0]*tofill)
        
        else:
            check = 0
            for i in a:
                check = check|i
            if check!=x:
                a.pop()
                a.append(x)
    
    for i in a:
        print(i,end=" ")
    print()

    t-=1