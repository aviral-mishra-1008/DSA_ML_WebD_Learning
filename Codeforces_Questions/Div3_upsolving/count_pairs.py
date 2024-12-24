import math
 
def upperBound(low,high,n,a):
    ans = high+1
    while low<=high:
        mid = int((low+high)/2)
        if a[mid]>n:
            high = mid-1
            ans = mid
        else:
            low = mid+1
        
    return ans

def lowerBound(low,high,n,a):
    while low<=high:
        mid = int((low+high)/2)
        if a[mid]>=n:
            high = mid-1
        else:
            low = mid+1
    return low
 
t = int(input(" "))
while t>0:
    t-=1
 
    ll = input(" ")
    inps = ll.split(" ")
 
    n = int(inps[0])
    x = int(inps[1])
    y = int(inps[2])
 
    ll2 = input(" ")
    a = ll2.split(" ")
 
    for i in range(n):
        a[i] = int(a[i])
 
    a.sort()
    suma = sum(a)
    counter = 0
 
    for i in range(n-1):
        lft = suma-a[i]
 
        uB = lft-x
        lB = lft-y
 
        indUb = upperBound(i+1,n-1,uB,a)
        indLb = lowerBound(i+1,n-1,lB,a)

        counter = counter + (indUb-indLb)
 
    print(counter)